#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int arr[n], cpy[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      cpy[i] = arr[i];
    }
    vector<int> indx;
    sort(cpy, cpy + n);
    for (int i = 0; i < n; i++) {
      if (cpy[i] != arr[i]) {
        indx.push_back(i);
      }
    }
    if (indx.size() == 0) {
      cout << "YES\n";
    } else {
      bool possible = true;
      for (auto j : indx) {
        if ((j < x) && ((n - 1 - j) < x)) {
          possible = false;
          break;
        }
      }
      if (possible) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }
  return 0;
}