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
const int MAXN = 1e6 + 69; // CAMBIAR ESTE
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N, Q, S;
vector< pair<int, ll> > G[MAXN];

void build(int id = 0, int l = 0, int r = N - 1) {
    if (l == r) {
        G[2 * (N + id)].pb({l, 0});
        G[l].pb({2 * (N + id) + 1, 0});
        return;
    }
    int L = 2 * id + 1, R = 2 * id + 2, m = (l + r) / 2;
    G[2 * (N + id)].pb({2 * (N + L), 0});
    G[2 * (N + id)].pb({2 * (N + R), 0});
    G[2 * (N + L) + 1].pb({2 * (N + id) + 1, 0});
    G[2 * (N + R) + 1].pb({2 * (N + id) + 1, 0});
    build(L, l, m); build(R, m + 1, r);
}
void add(int v, int ql, int qr, int w, int t, int id = 0, int l = 0, int r = N - 1) {
    if (r < ql || l > qr)
        return;
    if (ql <= l && r <= qr) {
        if (t == 2)
            G[v].pb({2 * (N + id), w});
        else
            G[2 * (N + id) + 1].pb({v, w});
        return;
    }
    int L = 2 * id + 1, R = 2 * id + 2, m = (l + r) / 2;
    add(v, ql, qr, w, t, L, l, m);
    add(v, ql, qr, w, t, R, m + 1, r);
}

ll D[MAXN];

int main() {
    riii(N, Q, S);
    build();
    FOR(_, 0, Q) {
        int t; ri(t);
        if (t == 1) {
            int v, u, w; riii(v, u, w);
            G[v - 1].pb({u - 1, w});
        }
        else {
            int v, l, r, w; rii(v, l), rii(r, w);
            add(v - 1, l - 1, r - 1, w, t);
        }
    }
    FOR(i, 0, MAXN) D[i] = LLINF;
    priority_queue< pair<ll, int> > pq;
    pq.push({0, S - 1});
    D[S - 1] = 0;
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        d = -d;
        if (D[u] < d)
            continue;
        for (auto [v, c] : G[u]) {
            if (D[v] > D[u] + c) {
                D[v] = D[u] + c;
                pq.push({ -D[v], v});
            }
        }
    }
    FOR(i, 0, N) printf("%lld ", (D[i] == LLINF ? -1ll : D[i]) );
    printf("\n");
    return 0;
}
