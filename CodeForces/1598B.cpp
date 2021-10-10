#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n][5];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> arr[i][j];
      }
    }
    int pairs[10][2] = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 2},
                        {1, 3}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};

    bool f = false;
    for (auto pair : pairs) {
      int buff = 0;
      int i = pair[0];
      int j = pair[1];
      int ic = 0;
      int jc = 0;
      for (int k = 0; k < n; k++) {
        if (arr[k][i] == 1 && arr[k][j] == 1) {
          buff++;
        } else {
          ic += arr[k][i];
          jc += arr[k][j];
        }
      }
      if (ic < n / 2) {
        int diff = n / 2 - ic;
        if (buff >= diff) {
          ic = n / 2;
          buff -= diff;
        }
      }
      if (jc < n / 2) {
        int diff = n / 2 - jc;
        if (buff >= diff) {
          jc = n / 2;
          buff -= diff;
        }
      }
      if (ic >= n / 2 && jc >= n / 2) {
        f = true;
        break;
      }
    }
    if (f) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}