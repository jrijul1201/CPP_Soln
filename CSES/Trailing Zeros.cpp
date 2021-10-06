#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll x;
    x = 5;
    ll ans = 0;
    while (n / x > 0)
    {
        ans += n / x;
        x *= 5;
    }
    cout<<ans;
    return 0;
}