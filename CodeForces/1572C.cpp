#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>
#include <assert.h>
#include <array>
#include <random>
#include <chrono>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dadsadasda;

#define ri(a) dadsadasda=scanf("%d", &a)
#define rii(a,b) dadsadasda=scanf("%d %d", &a, &b)
#define riii(a,b,c) dadsadasda=scanf("%d %d %d", &a, &b, &c)
#define rl(a) dadsadasda=scanf("%lld", &a)
#define rll(a,b) dadsadasda=scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ALL(s) s.begin(),s.end()
#define SZ(s) (int)s.size()

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 3e3 + 69; // CAMBIAR ESTE
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N;
int A[MAXN];
vi INDS[MAXN];

int DP[MAXN][MAXN];
int f(int l, int r) {
    if (DP[l][r] != -1)
        return DP[l][r];
    DP[l][r] = 0;
    if (l == r)
        return DP[l][r];

    DP[l][r] = 1 + f(l + 1, r);
    for (auto nxt : INDS[A[l]]) {
        if (nxt <= l || nxt > r)
            continue;
        if (nxt == r)
            DP[l][r] = min(DP[l][r], 1 + f(l + 1, nxt - 1));
        else
            DP[l][r] = min(DP[l][r], 1 + f(l + 1, nxt - 1) + f(nxt, r));
    }
    return DP[l][r];
}

void solve() {
    ri(N);
    FOR(i, 0, N) FOR(j, 0, N) DP[i][j] = -1;
    int j = 0;
    FOR(i, 0, N) {
        int a; ri(a);
        if (j == 0 || A[j - 1] != a)
            A[j++] = a;
    }
    N = j;
    FOR(i, 0, N) INDS[A[i]].clear();
    FOR(i, 0, N) INDS[A[i]].pb(i);
    printf("%d\n", f(0, N - 1));
}

int main() {
    int t; ri(t);
    while (t--) solve();
    return 0;
}
