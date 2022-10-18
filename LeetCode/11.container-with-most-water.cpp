/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int max_area = -1;
        while (i < j)
        {
            int curr_area = min(height[i], height[j]) * (j - i);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            max_area = max(max_area, curr_area);
        }
        return max_area;
    }
};
// @lc code=end
