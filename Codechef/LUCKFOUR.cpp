/* https://www.codechef.com/problems/LUCKFOUR */

#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;cin>>t;
	while(t--){
	    int fours=0;
	    int n;cin>>n;
	    while(n!=0){
	        int z=n%10;
	        if(z==4){
	            fours++;
	        }
	        n=n/10;
	    }
	    cout<<fours<<endl;
	}
	return 0;
}
