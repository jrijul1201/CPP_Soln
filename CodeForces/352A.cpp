#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main() {
    int n;
    cin >> n;
    int five = 0;
    int zero = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 5) {
            five++;
        } else {
            zero++;
        }
    }
    if (five < 9 && zero > 0) {
        cout << 0;
    } else if (five >= 9 && zero > 0) {
        int a = 9 * (five / 9);
        for (int i = 1; i <= a; i++) {
            cout << 5;
        }
        for (int i = 1; i <= zero; i++) {
            cout << 0;
        }
    } else {
        cout << -1;
    }

    return 0;
}