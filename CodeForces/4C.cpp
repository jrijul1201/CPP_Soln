#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  unordered_map<string, int> names;
  while (t--) {
    string s;
    cin >> s;
    if (names[s] == 0) {
      cout << "OK\n";
    } else {
      cout << s << names[s] << "\n";
    }
    names[s]++;
  }

  return 0;
}