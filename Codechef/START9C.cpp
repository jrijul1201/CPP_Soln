#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int N,M,Q;
    cin>>N>>M>>Q;
    unordered_set<int> st;
    int f=1;
    while(Q--){
        string ch;
        int i;
        cin>>ch>>i;
        if(f==1){
            if(ch=="-"){
                if(st.find(i) != st.end()){
                    st.erase(i);
                }
                else{
                    f=0;
                }
            }
            else{
                if((int)st.size() == M){
                    f=0;
                }
                else{
                    st.insert(i);
                }
            }
        }
       
    }
       if(f==0){
            cout<<"Inconsistent"<<endl;
        }
        else{
            cout<<"Consistent"<<endl;
        }  
    
}
return 0;
}