#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
 
    int len = (1<<n);
 
    for(int i = 0 ; i<len ; i++){
        int ans = 0;
        for(int j = 0 ; j<n ; j++){
            if((i&(1<<j)) == 0){
                ans -= arr[j];
            }
            else{
                ans += arr[j];
            }
        }
        if(ans % 360 == 0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<"\n";
 
    return 0;
}