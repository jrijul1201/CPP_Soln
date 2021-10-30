#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3] ; 
    int b[3] ; 
    int i ; 
    int suma = 0 ; 
    int sumb = 0 ;
    for(i=0 ; i<3 ; i++){
        cin >> a[i] ; 
    }
    for(i=0 ; i<3 ; i++){
        cin >> b[i] ; 
    }
    for(i=0 ; i<3 ; i++){
        if(a[i]>b[i]){
            suma++ ;
        }
    
        else if (b[i]>a[i]) {
            sumb++;
        }
         
        
    }
    cout << suma<<" "<< sumb ;
}
