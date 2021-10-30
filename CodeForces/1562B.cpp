#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a,b,k,t,l,n,i;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>l;
        cin>>s;
        a=s.find('0');
        if(a!=-1)
        {
            if(a>l/2)
            {
                cout<<1<<" "<<a+1<<" "<<1<<" "<<a<<endl;
            }
            else if(a<l/2)
            {
                cout<<a+1<<" "<<l<<" "<<a+2<<" "<<l<<endl;
            }
            else if(a==l/2)
            {
                cout<<1<<" "<<a+1<<" "<<1<<" "<<a<<endl;

            }
        }
        else
        {
            cout<<1<<" "<<l/2<<" "<<2<<" "<<l/2+1<<endl;
        }

    }
}
