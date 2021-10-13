#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
    int a,b;
    float c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"NUMBER = "<<a<<endl;
    d = b*c;
    cout<<"SALARY = U$ "<<fixed << setprecision(2)<<d<<endl;
    
    
    return 0;
}