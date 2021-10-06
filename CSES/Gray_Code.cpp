#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    bitset<16> b;

    for (int i = 0; i < pow(2, n); i++)
    {
        b = (i ^ (i >> 1));
        string str = b.to_string();
        str = str.substr(16 - n, n);
        cout << str << "\n";
    }
    return 0;
}

00
00
00

01
00
01

10
01
11

11
01
10
