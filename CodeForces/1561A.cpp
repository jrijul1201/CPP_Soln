#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int k,c,i,j,n,t,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){cin>>c;a[i]=c;b[i]=a[i];}
        sort(b,b+n);
        c=1;k=0;
        while(c)
        {r=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!=b[i]){r=1;break;}
            }
            if(r==0){c=0;break;}
            else
            {
                if(k%2==0){i=0;}
                else{i=1;}
                k+=1;
                for(i;i<n-1;i+=2)
            {
                if(a[i]>a[i+1])
                {
                    j=a[i];
                    a[i]=a[i+1];
                    a[i+1]=j;
                }
            }
            }
            cout<<endl;
        }
        cout<<k<<endl;
    }
}
