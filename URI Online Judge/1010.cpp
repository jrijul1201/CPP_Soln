#include<iostream>
#include<iomanip>
using namespace std;

int main (){
    
    int a,b,c,d;
    double e,f,ans;

    cin>>a>>b>>e;
    cin>>c>>d>>f;
    
    ans= b*e + d*f;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<ans<<endl;
    return 0;
}
