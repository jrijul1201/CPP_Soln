#include<iostream>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int a[n];
    a[0]=s[0]-96;
    for(int i=1;i<n;i++){
        a[i]=a[i-1]+s[i]-96;
    }
    while(q--){
        int p,r;
        cin>>p>>r;
        if(p==1){cout<<a[r-1]<<endl;}
        else{cout<<(a[r-1]-a[p-2])<<endl;}
    }
    return 0;
}