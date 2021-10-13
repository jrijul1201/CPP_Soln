#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    int h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    int mx1 = arr[n - 1];
    int c = 0;
    int mx2 = arr[n - 2];
    int tot = mx1 + mx2;
    if (h % tot == 0) {
      cout << 2 * (h / tot) << "\n";
    } else {
      int c = 2 * (h / tot);
      h -= c / 2 * tot;
      if (h <= mx1) {
        cout << c + 1 << "\n";
      } else {
        cout << c + 2 << "\n";
      }
    }
  }
  return 0;
}