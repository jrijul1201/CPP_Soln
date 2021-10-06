#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    int h, f, t, tn, fv, two, o, half, quat, zone, zzf, zzo;
    cin >> n;
    h = int(n / 100);
    n = fmod(n, 100);
    f = int(n / 50);
    n = fmod(n, 50);
    t = int(n / 20);
    n = fmod(n, 20);
    tn = int(n / 10);
    n = fmod(n, 10);
    fv = int(n / 5);
    n = fmod(n, 5);
    two = int(n / 2);
    n = fmod(n, 2);
    o = int(n / 1);
    n = fmod(n, 1);
    half = int(n / 0.50);
    n = fmod(n, 0.50);
    quat = int(n / 0.25);
    n = fmod(n, 0.25);
    zone = int(n / 0.10);
    n = fmod(n, 0.10);
    zzf = int(n / 0.05);
    n = fmod(n, 0.05);
    zzo = (n / (float)0.01);

    cout << "NOTAS:" << endl;
    cout << h << " nota(s) de R$ 100.00" << endl;
    cout << f << " nota(s) de R$ 50.00" << endl;
    cout << t << " nota(s) de R$ 20.00" << endl;
    cout << tn << " nota(s) de R$ 10.00" << endl;
    cout << fv << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << o << " moeda(s) de R$ 1.00" << endl;
    cout << half << " moeda(s) de R$ 0.50" << endl;
    cout << quat << " moeda(s) de R$ 0.25" << endl;
    cout << zone << " moeda(s) de R$ 0.10" << endl;
    cout << zzf << " moeda(s) de R$ 0.05" << endl;
    cout << zzo << " moeda(s) de R$ 0.01" << endl;

    return 0;
}