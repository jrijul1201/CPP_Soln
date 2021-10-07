#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float a,b;
    double c;
    string name;
    cin>>name;
    cin>>a;
    cin>>b;
    c = a + ((b*15)/100);
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<c<<endl;
    
    return 0;
}