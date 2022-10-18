#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        long long int N=n;
        int cnt=0;
        
        while(N>1){
            int x=(sqrt(1+24*N)-1)/6;
            N=N-(x*(3*x+1)/2);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}