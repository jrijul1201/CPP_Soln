#include<bits/stdc++.h>
using namespace std;
 
void tests(){
    long long int r,c,x;
    long long int R,C;
    cin>>r>>c>>x;
    
        if(x%r==0){
            C=x/r;
            R=r;            
        }
        else{
            C=(x/r) +1;
            R = x%r;
        }
 
        long long res=c*(R-1) + C;
        cout<<res<<endl;
 
}
int main(){
long long t;
cin>>t;
while(t--){
    tests();
}
    
return 0 ;
 
}