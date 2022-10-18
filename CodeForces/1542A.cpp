#include<iostream>
using namespace std;
int main()
{
    int c,i,n,t;
    cin>>t;
    while(t-->0)
    {   c=0;
        cin>>n;
        int a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)c+=1;
        }
        if(c==n)
        {cout<<"YES"<<endl;}
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
