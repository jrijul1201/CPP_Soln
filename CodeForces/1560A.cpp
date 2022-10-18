#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int a;
    cin>>a;
    int c=0;
    int j=0;
    int arr[10000];
    while(j<a){
    c+=1; 
     if(c%3==0 ){
         c=c+1;
         if(c%10==3){
             c+=1;
             arr[j]=c;
         }
         else{
         arr[j]=c;    
         }
         
     }
     else if(c%10==3){
          c+=2;
           arr[j]=c;
     }
     else{
         arr[j]=c;
     }
    
    j+=1;
    }
  
    cout<<arr[a-1]<<endl;
}
return 0;
}