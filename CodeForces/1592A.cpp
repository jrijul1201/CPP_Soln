#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        int a[10000];
        cin>>n>>h;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,cmp);
        int ans=0;
        int sum=a[0]+a[1];
        ans+=h/sum*2;
        if(h%sum)
            ans+=1;
        if(h%sum>a[0])
            ans+=1;
        cout<<ans<<endl;
    }
}