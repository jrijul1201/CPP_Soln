#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    int sum = 0;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == n) {
        int ans = 0;
        for (int i = 0; i < m; i++) {
            ans += a[i] * (a[i] + 1) / 2;
        }
        cout << ans << " " << ans;
    } else {
        int minsum = 0;
        int maxsum = 0;
        sort(a, a + m);
        int b[m];
        for (int i = 0; i < m; i++) {
            b[i] = a[i];
        }
        int j = 0;
        for (int i = 0; i < m; i++) {
            if (j + a[i] <= n) {
                minsum += a[i] * (a[i] + 1) / 2;
                j += a[i];
            } else {
                for (int k = j + 1; k <= n; k++) {
                    minsum += a[i];
                    a[i]--;
                }
                j = n;
            }
        }
        j = 0;
        while (j < n) {
            int k = 0;
            int maxval = INT_MIN;
            for (int i = 0; i < m; i++) {
                if (b[i] > maxval) {
                    maxval = b[i];
                    k = i;
                }
            }
            maxsum += maxval;
            b[k]--;
            j++;
        }
        cout << maxsum << " " << minsum << '\n';
    }

    return 0;
}