#include <iostream>
 
using namespace std;
 
int main() {
    double z;
    cin>>z;
    int a = int (z);
    int e,f,g,h,i,j;
    e = a/100;
    f = (a%100)/50;
    g = (a%100%50)/20;
    h = (a%100%50%20)/10;
    i = (a%100%50%20%10)/5;
    j = (a%100%50%20%10%5)/2;

    
    double y ;
    y = z - int(z) + (a%100%50%20%10%5%2);

    int n= y*100;
    int ea,fa,ga,ha,ia,ja,ka;
    ea = n/100;
    fa = (n%100)/50;
    ga = (n%100%50)/25;
    ha = (n%100%50%25)/10;
    ia = (n%100%50%25%10)/5;
    ja = (n%100%50%25%10%5)/1;

    cout<<"NOTAS:"<<endl;
    cout<<e<<" nota(s) de R$ 100.00"<<endl;
    cout<<f<<" nota(s) de R$ 50.00"<<endl;
    cout<<g<<" nota(s) de R$ 20.00"<<endl;
    cout<<h<<" nota(s) de R$ 10.00"<<endl;
    cout<<i<<" nota(s) de R$ 5.00"<<endl;
    cout<<j<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<ea<<" moeda(s) de R$ 1.00"<<endl;
    cout<<fa<<" moeda(s) de R$ 0.50"<<endl;
    cout<<ga<<" moeda(s) de R$ 0.25"<<endl;
    cout<<ha<<" moeda(s) de R$ 0.10"<<endl;
    cout<<ia<<" moeda(s) de R$ 0.05"<<endl;
    cout<<ja<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}

