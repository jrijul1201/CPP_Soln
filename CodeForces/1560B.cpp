#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,d;
    cin>>t;
    for (int i=0;i<t;i++)
    {   cin>>a>>b>>c;
 
        int k=abs(a-b)-1;
        int n=abs(a-b)*2;
        if((1<=a)&&(a<=n) && (1<=b)&&(b<=n) && (1<=c)&&(c<=n))
        {
            if((1<=c)&&(c<(k+2)))
            {
                d=c+n/2;
            }
            else
             {
                d=c-n/2;
            }
        }
        else{d=-1;}
        cout<<d<<endl;
    }
return 0;
}