#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t, n, m, k, ans;
    cin>>t;
    while(t--)
    {
        ans = 0;
        cin>>n>>m>>k;
 
        ans += (m-1) + m*(n-1);
 
        if(ans == k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
