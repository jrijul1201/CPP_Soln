#include <iostream>
#include<math.h>
using namespace std;
int main() {
int i,j,N,s=0;
cin>>N;
long a[N];

{
    for(i=0;i<N;i++)
    {
        cin>>a[i];
          }
 for(i=0;i<N;i++)
{if(a[i]>1 && a[i]< pow(2,31))
{

 s=0;
       for(j=2;j<=sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                s++;
                break;
            }
        }
           if(s==1)
            cout<<"Not Prime"<<"\n";
            else
             cout<<"Prime"<<"\n";
}
}
}
return 0;
}
