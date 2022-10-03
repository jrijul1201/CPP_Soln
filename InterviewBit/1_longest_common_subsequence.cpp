/*  
    Difficulty :- hard
    Ref :- https://www.interviewbit.com/problems/longest-valid-parentheses/
    Author :- plksharma12 [https://github.com/plksharma12]
*/

int Solution::longestValidParentheses(string A) {
    int n = A.length();
    if (n <= 1) {
        return 0;
    }
    int ret = 0, i = 0, j = 0;
    std::vector<int> table(n+1,0);
    for (i = 1; i <= n; ++i) {
        j = i - 2 - table[i-1];
        if (A[i-1] == '(' || j < 0 || A[j] == ')') {
            table[i] = 0;
        } else {
            table[i] = table[i-1]+2+table[j];
            ret = max(ret, table[i]);
        }
    }
    return ret;
}
