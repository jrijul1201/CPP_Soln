#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    long long int n = str.length();
    long long int mx = 0, c = 0;
    char ch;
    ch = str[0];
    for (long long int i = 1; i < n; i++)
    {
        if (str[i] == ch)
        {
            c++;
        }
        else
        {
            mx = max(mx, c);
            ch = str[i];
            c = 0;
        }
        mx = max(mx, c);
    }
    cout << ++mx << "\n";
    return 0;
}