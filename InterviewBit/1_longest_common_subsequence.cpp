/*  
    Difficulty :- hard
    Ref :- https://www.interviewbit.com/problems/longest-common-subsequence/
    Author :- plksharma12 [https://github.com/plksharma12]
*/

int solve_(string A,string B, vector<vector<int>> & dp,int m,int n){

    if(m==0||n==0) return 0;

    if(dp[m][n]!=-1) return dp[m][n];
    if(A[m-1]==B[n-1]) return dp[m][n]= 1+ solve_(A,B,dp,m-1,n-1);

    dp[m][n]=max(solve_(A,B,dp,m-1,n),solve_(A,B,dp,m,n-1));

    return dp[m][n];

}

int Solution::solve(string A, string B) {
    int m=A.size(),n=B.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

    return solve_(A,B,dp,m,n);
}
