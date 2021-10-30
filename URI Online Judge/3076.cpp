#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n;

    while (cin>>n)
    {
        int cent=n/100;

        if((cent*100)==n)
        {
            cout<<cent<<endl;
        }
        else if(cent==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<(cent+1)<<endl;
        }
    }
    
    
    return 0;
}