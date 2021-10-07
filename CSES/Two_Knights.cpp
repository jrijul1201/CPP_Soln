#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << "0"
                 << "\n";
        else if (i == 2)
            cout << "6"
                 << "\n";
        else if (i == 3)
            cout << "28"
                 << "\n";
        else if (i == 4)
            cout << "96"
                 << "\n";
        else if (i >= 5)
        {
            ll ans = ((i * i * ((i * i) - 1) / 2) - 16) * (i - 4) * (i - 4);
            cout << ans
                 << "\n";
        }
    }

    return 0;
}