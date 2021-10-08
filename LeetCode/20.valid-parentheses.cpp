/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            if (s[i] == ')')
            {
                if (st.size() == 0)
                {
                    return false;
                }
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if (s[i] == '}')
            {
                if (st.size() == 0)
                {
                    return false;
                }
                if (st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if (s[i] == ']')
            {
                if (st.size() == 0)
                {
                    return false;
                    /* code */
                }

                if (st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.size() == 0)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
