#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n,i,j,ind;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==a[1])
        {
            for(j=0;j<n;j++)
            {
                if(a[0]!=a[j])
                {
                    ind=j+1;
                    break;
                }
               
            }
             cout<<ind<<endl;
        }
        else
        {
            if(a[0]==a[2])
            {
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        
    }
    return 0;
 
}