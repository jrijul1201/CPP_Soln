#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        long long int n,i,j,sum=0;
        double max;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        j=a[0];
        for(i=1;i<n;i++){
            if(a[i]>j){
                j=a[i];
            }
        }
        max=j+ double((sum - j))/(n-1);
        cout<<fixed<<setprecision(9)<<max<<"\n";
    }
    return 0;
 
}