#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s=to_string(n);
        int len=s.length();
        int m=len;
        bool p=false;
        bool q=false;
        for(int i=(len-1);i>=0;i--){
            if(s[i]=='5'){
                for(int j=(i-1);j>=0;j--){
                    if((s[j]=='2') || (s[j]=='7')){
                        m=min(m,(len-2-j));
                        p=true;
                    }
                    else if(j==0){
                        break;
                    }
                }
            }
            if(s[i]=='0'){
                for(int j=(i-1);j>=0;j--){
                    if((s[j]=='5') || (s[j]=='0')){
                        m=min(m,(len-2-j));
                        q=true;
                    }
                    else if(j==0){
                        break;
                    }
                }
            }
            if((p==true) && (q==true)){break;}
        }
        cout<<m<<endl;
    }
    return 0;
}