/*  
    Difficulty :- Medium
    Ref :- https://www.interviewbit.com/problems/arrange-ii/
*/

#include <bits/stdc++.h>
using namespace std;

int arrange(string A, int B) {
    int n=A.size();
    if(n<B) return -1;
    vector<vector<int>> dp(B, vector<int>(n,INT_MAX));
    int w=0,b=0;
    for(int i=0;i<n;i++){
        if(A[i]=='W') w++;
        else b++;
        dp[0][i]= w*b;
    }
    for(int i=1;i<B;i++){
        for(int j=0;j<n;j++){
            if(i>j) dp[i][j]= INT_MAX;
            else{
                int mn=INT_MAX;
                w=0;b=0;
                for(int k=j-1;k>=0;k--){
                    if(A[k+1]=='W') w++;
                    else b++;
                    if(dp[i-1][k]+ w*b >=0) mn=min(mn, dp[i-1][k] + w*b);
                }
                dp[i][j]=mn;
            }
        }
    }
    return dp[B-1][n-1] >0 ? dp[B-1][n-1]:0;
}
