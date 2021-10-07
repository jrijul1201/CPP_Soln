#include <iostream>
using namespace std;
int main()
{
    int e = 0, o = 0, p = 0, n = 0;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            p = p + 1;
        }
        else if (arr[i] < 0)
        {
            n = n + 1;
        }
        if (arr[i]  == 0)
        {
            e = e + 1;
        }
        else
        {
            o = o + 1;
        }
    }
    cout << e << " valor(es) par(es)" << endl
         << o << " valor(es) impar(es)" << endl
         << p << " valor(es) positivo(s)" << endl
         << n << " valor(es) negativo(s)" << endl;

    return 0;
}