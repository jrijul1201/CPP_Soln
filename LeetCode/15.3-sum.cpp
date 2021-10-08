/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> p;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {

                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else
                {
                    p.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
            }
        }
        vector<vector<int>> ans(p.begin(), p.end());
        return ans;
    }
};
// @lc code=end
