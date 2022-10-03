#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n = n % 2;
        if (n == 1)
            cout << "9\n";
        else {
            cout << "1\n";
        }
    }
    return 0;
}