#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        bool ans = true;
        double x = ((2.0 * double(a)) - double(b)) / 3.0;
        double y = ((2.0 * double(b)) - double(a)) / 3.0;
        if (a == 0 && b != 0)
            ans = false;
        if (b == 0 && a != 0)
            ans = false;
        if (a > 2 * b)
            ans = false;
        if (b > 2 * a)
            ans = false;
        if (ans)
        {
            if (x == int(x) && y == int(y) && x >= 0 && y >= 0)
                ans = true;
            else
                ans = false;
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        //cout << fixed << setprecision(0) << x << " " << y;
    }
    return 0;
}