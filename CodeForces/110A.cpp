#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main()
{
    long long n,l,t=0;
    cin>>n;
    
    string strn = to_string(n);
    l=strn.length();
    for(int i=0;i<l;i++)
    
        {
            if(strn[i]=='4'||strn[i]=='7')
            {t++;}
        }
    if(t==4||t==7)
    {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
return 0;
}