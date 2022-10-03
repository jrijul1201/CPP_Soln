#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "0") break;
        int l = s.length();
        long long f = 1;
        for (int i = 1; i < l + 1; i++) {
            f = f * i;
        }
        cout << f << "\n";
    }
    return 0;
}