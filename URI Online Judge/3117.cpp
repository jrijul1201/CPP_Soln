#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, b;
    cin >> n >> b;
    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= 0) c++;
    }
    if (c < b)
        cout << "NO\n";
    else {
        cout << "YES\n";
    }

    return 0;
}
