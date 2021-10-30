#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int q,r;
    q=a/b;
    r=a%b;

    if(r<0)
    {
        if(b>0)
        {
            r+=b;
            q-=1;
        }
        else
        {
            r+=b*(-1);
            q+=1;
        }
        
    }

    cout<<q<<" "<<r<<endl;

    return 0;
}
    