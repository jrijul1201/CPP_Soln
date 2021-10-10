//Aditya Chandra
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto& x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define YES "YES"
#define NO "NO"

using namespace std;

int minTaps(int n, vector<int>& ranges) {
        vector<pair<int,int>> cutoffs(n+1);
        for(int i = 0 ; i <= n ; i++){
            cutoffs[i].first = i - ranges[i];
            cutoffs[i].second = i + ranges[i];
        }
        int currMin = 0;
        int currMax = 0;
        int ptr;
        int cnt = 0;
        while(currMax < n){
                for(int i = 0 ; i <= n; i++){
                    if(cutoffs[i].first <= currMin && cutoffs[i].second > currMax){
                        currMax = cutoffs[i].second;
                    }
                }
                if(currMin == currMax){
                    return -1;
                }
                cnt++;
                currMin = currMax;
        }
        return cnt;
    }   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<int> ranges;
    for1(n+1){
        ll k;
        cin >> k;
        ranges.pb(k);
    }
    cout << minTaps(n, ranges) << endl;
}