#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll binexp(int a, ll n)
{
    if (n == 1)
        return a % mod;
    else if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return (binexp(a, n / 2) * binexp(a, n / 2)) % mod;
    else
        return (a * binexp(a, n / 2) * binexp(a, n / 2)) % mod;
}
int main()
{
    int n;
    cin >> n;
    ll ans = binexp(2, n);
    cout << ans;
    return 0;
}