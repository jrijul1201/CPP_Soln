#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;
        ll ans = 0;
        if (y >= x)
        {
            if (y % 2 == 0)
            {
                ans = (y - 1) * (y - 1) + 2 * y - x;
            }
            else
                ans = (y - 1) * (y - 1) + x;
        }
        else if (y < x)
        {
            if (x % 2 == 0)
            {
                ans = (x - 1) * (x - 1) + y;
            }
            else
                ans = (x - 1) * (x - 1) + 2 * x - y;
        }
        cout << ans << "\n";
    }
    return 0;
}