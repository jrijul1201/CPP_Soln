#include<iostream>
using namespace std;
int main()
{
long long int t,a,b;
cin>>t;
while(t-->0)
    {
        cin>>a>>b;
       if(b!=1)
       {
          cout<<"YES"<<endl;
       if(b!=2)
       {cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;}
       else
       {
           cout<<a<<" "<<a*(b+1)<<" "<<a*(b+2)<<endl;
       }
       }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
