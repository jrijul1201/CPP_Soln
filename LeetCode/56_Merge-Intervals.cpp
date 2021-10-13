#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    intervals.push_back({INT_MAX, INT_MAX});
    for (int i = 0; i < intervals.size() - 1; i++) {
        int start = intervals[i][0];
        int end = intervals[i][1];
        while (end >= intervals[i + 1][0]) {
            i >= intervals.size() ? i = intervals.size() - 1 : i++;
            end = max(intervals[i][1], end);
        }

        ans.push_back({start, end});
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = merge(intervals);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}