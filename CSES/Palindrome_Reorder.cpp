#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    string str;
    cin >> str;
    string cpy = str;
    reverse(cpy.begin(), cpy.end());
    if (cpy == str)
        cout << str << "\n";
    else
    {
        ll arr[27] = {0};
        char ch;
        for (ll i = 0; i < str.length(); i++)
        {
            ch = str[i];
            arr[ll(ch) - 64]++;
        }
        ll c = 0, idx = 0;
        for (ll i = 0; i < 27; i++)
        {
            if (arr[i] % 2 == 1)
            {
                c++;
                idx = i;
            }
        }
        string ans;
        if (c > 1)
            cout << "NO SOLUTION\n";
        else
        {
            for (ll i = 0; i < 27; i++)
            {
                ll z = arr[i] / 2;
                while (z--)
                {
                    ch = 64 + i;
                    ans.push_back(ch);
                }
            }
            if (c == 1)
            {
                ch = 64 + idx;
                ans.push_back(ch);
            }
            for (ll i = 26; i >= 0; i--)
            {
                ll z = arr[i] / 2;
                while (z--)
                {
                    ch = 64 + i;
                    ans.push_back(ch);
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}