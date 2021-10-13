#include <bits/stdc++.h>
using namespace std;
#define ll long long

int jump(vector<int>& nums) {
    int n = nums.size();
    vector<int> reach(n);
    for (int i = 0; i < n; i++) {
        reach[i] = i + nums[i];
    }
    if (n < 2) return 0;
    int max_reach = nums[0], curr_pos = nums[0], cnt = 1, i = 0;
    while (curr_pos < n - 1) {
        max_reach = max(max_reach, reach[i]);
        if (curr_pos == i) {
            cnt++;
            curr_pos = max_reach;
        }
        i++;
    }
    return cnt;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << jump(nums);
}