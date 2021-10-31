#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        for (int k=2;k<=log2(n+1);k++){
            
            int y=pow(2,k)-1;
            double z=n*1.0/y;
            if (floor(z)==ceil(z)){
                
                cout<<int(z)<<endl;
                break;
            }
        }
    }
    return 0;
}