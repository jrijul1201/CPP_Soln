#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    if (n >= 5)
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    else if (n == 4)
        cout << "3 1 4 2";
    else if (n == 1)
        cout << "1";
    else
    {
        cout << "NO SOLUTION";
    }
    cout << "\n";
    return 0;
}