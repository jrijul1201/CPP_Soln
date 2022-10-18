#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        long long arr[100];
        arr[0] = 0;
        arr[1] = 1;
        int i = 2;
        for (int i = 2; i < n; i++) {
            if (i % 2 == 0)
                arr[i] = arr[i - 1] + arr[i - 2];
            else
                arr[i] = arr[i - 1] * arr[i - 2];
        }
        cout << arr[n - 1] << "\n";
    }
    return 0;
}