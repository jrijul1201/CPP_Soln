#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
    float r;
    cin>>r;
    double pi=3.14159, v,c;
    c= r*r*r;
    v= (4*pi*c)/3;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<v<<endl;
    return 0;
}