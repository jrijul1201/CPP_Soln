#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int p=0;
        for(int i=0;i<n;i++){
            if(s[i]=='M'){p=p+1;}
        }
        if((p!=(n/3))){cout<<"NO"<<endl;}
        else{int t1=0;
        int t2=((2*n)/3);
        int m=0;
        bool k=true;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){t1++;t2--;}
            else{
                m=m+1;
                if((t1>=m) && (t2>0) && (t1<((n/3)+m))){k=true;}
                else{k=false;break;}
            }
        }
        if(k==false){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}}
        
    }
    return 0;
}