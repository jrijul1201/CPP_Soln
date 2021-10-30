#include<bits/stdc++.h>
using namespace std;

void calculate(int a, int b, int c){
    int A=0;
    int B=0;
    int C=0;
    if(a>b & a>c){
        B=(a-b)+1;
        C=(a-c)+1;
    }
    else if(b>a & b>c){
        A=(b-a)+1;
        C=(b-c)+1;
    }
    else if(c>a & c>b){
        A=(c-a)+1;
        B=(c-b)+1;
    }
    else if(b==c){
        A=(c-a)+1;
        B=C=1;
    }
    else if(a==c){
        B=(c-b)+1;
        A=C=1;
    }
    else if(a==b){
        C=(b-c)+1;
        A=B=1;
    }
    else{
        A=B=C=1;
    }
    cout<<A<<' '<<B<<' '<<C<<' '<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        calculate(a,b,c);
    }
    return 0;
}