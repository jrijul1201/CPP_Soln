
/* 
Codechef october long challenge digit removal problem
source:- https://www.codechef.com/OCT21C/problems/DIGITREM
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;

        //convert the number into string for simplicity
        string str = to_string(n);
        ll size = str.length();

        if(d==0){
            int idx = size;
            for(int i=0;i<size;i++){
                //Convert every number after first 0 to 1.
                //find the first 0 and make it 1.
                if(str[i] == '0'){
                    str[i] = '1';
                    idx = i;
                    break;
                }
            }

            for(int i=idx+1;i<size;i++){
                str[i] = '1';
            }
        }

        else if(d==9){
            //if first digit is 9 then the minumum no is 1000...
            if(str[0] == '9'){
                for(int i=0;i<size;i++){
                    str[i] = '0';
                }

                str = '1' + str;
            }
            else{
                int idx=size;
                for(int i=0;i<size;i++){
                    if(str[i] == '9'){
                        for(int j=i-1;j>=0;j--){
                            if(str[j] < '8'){
                                str[j]++;
                                idx = j;
                                //make them zero
                                goto zeromaker;
                            }
                        }

                        //after all of them become 9 convert it to 100...
                        for(int i=0;i<size;i++){
                            str[i] = '0';
                        }
                        str = '1' + str;
                    }
                }

                zeromaker:;

                for(int i=idx+1;i<size;i++){
                    str[i] = '0';
                }
            }
        }
        //for 1 <= d >= 8
        else{
            int i=0;
            for(i=0;i<size;i++){
                //if they are equal like 8 8 then increment by 1.
                if((str[i] - 48) == d){
                    str[i] = str[i] + 1;
                    break;
                }
            }
            //convert remaining to 0.
            for(int j=i+1;j<size;j++){
                str[j] = '0';
            }
        }
        ll res = stoll(str);
        cout<<res-n<<endl;
    }    
    return 0;
}