#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void solve(int n){
    int a , b , c;
        bool flag = false;
        for(int i = 2 ; i*i<= n ; i++){
            if(n % i == 0){
                a = i;
                int temp = n/a;
                for(int j = 2 ; j*j<=temp ; j++){
                    if(j != a){
                        if(temp % j == 0){
                            b = j;
                            c = temp/j;
                            if(a != b && b != c && c != a){
                                flag = true;
                                break;
                            }
                        }
                    }
                }
                if(flag){
                    break;
                }
            }
        } 
    if(flag){
        cout<<"YES"<<"\n";
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }   
    else{
        cout<<"NO"<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);        
    }
    return 0;
}