#include <bits/stdc++.h>
using namespace std;

int minTaps(int n, vector<int>& ranges) {
    vector<pair<int, int>> cutoffs(n + 1);
    for (int i = 0; i <= n; i++) {
        cutoffs[i].first = i - ranges[i]; //left range
        cutoffs[i].second = i + ranges[i]; //right range
    }
    int currMin = 0;
    int currMax = 0;
    int ptr;
    int cnt = 0;
    while (currMax < n) {
        for (int i = 0; i <= n; i++) {
            if (cutoffs[i].first <= currMin && cutoffs[i].second > currMax) {
                currMax = cutoffs[i].second;
            }
        }
        if (currMin == currMax) {
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

    int n;
    cin >> n;
    vector<int> ranges;
    for (int i = 0; i < n + 1; i++) {
        int k;
        cin >> k;
        ranges.push_back(k);
    }
    cout << minTaps(n, ranges) << endl;
}