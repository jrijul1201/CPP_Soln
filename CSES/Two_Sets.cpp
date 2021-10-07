#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 4 == 3)
    {
        if (n % 2 == 0)
        {
            cout << "YES\n";
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 4; i++)
            {
                cout << i + 1 << " ";
            }
            for (int i = (3 * n / 4); i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << "\n";
            cout << n / 2 << "\n";
            for (int i = (n / 4); i < (3 * n / 4); i++)
            {
                cout << i + 1 << " ";
            }
        }
        else
        {
            cout << "YES\n";
            vector<int> v1, v2;
            v1.push_back(1);
            v1.push_back(n - 1);
            v2.push_back(n);
            for (int i = 2; i <= (n / 2) - 1; i++)
            {
                v1.push_back(i);
                v1.push_back(n - i);
                i++;
                v2.push_back(i);
                v2.push_back(n - i);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            cout << v1.size() << "\n";
            for (auto x : v1)
            {
                cout << x << " ";
            }
            cout << "\n";
            cout << v2.size() << "\n";
            for (auto x : v2)
            {
                cout << x << " ";
            }
        }
    }
    else
        cout << "NO\n";
    return 0;
}