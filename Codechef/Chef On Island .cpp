#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        int min;
        if(x/xr < y/yr){
            min=x/xr;
        }
        else{
            min=y/yr;
        }
        if(min>=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
