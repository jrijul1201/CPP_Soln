#include<bits/stdc++.h>


using namespace std;
void loc(long long a){
    double b;
    long long p,r,c;
    b=double(pow(a,0.5));
    p=int(b);
    if ((b-p)!=0)
    {
        /* code */
        int t=a-pow(p,2)-p-1;
        if(t>0){
            r=(p+1);
            c=(p+1-t);
        }
        else{
            c=(p+1);
            r=(t+p+1);
        }

    }
    else{
        r=p;
        c=1;
    }
    cout<<r<<" "<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a;
        cin>>a;
        loc(a);
    }
    
    return 0;
}