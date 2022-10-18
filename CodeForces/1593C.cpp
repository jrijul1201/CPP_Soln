#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        sort(a,a+k);
        int sum=0;
        int no=0;
        for(int i=(k-1);i>=0;i--){
            sum=sum+(n-a[i]);
            if(sum>(n-1)){
                break;
            }
            no=no+1;
        }
        cout<<no<<endl;
    }
    return 0;
}