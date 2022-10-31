/*  
    Difficulty :- Medium
    Ref :- interviewbit.com/problems/coin-sum-infinite/
*/

#include <bits/stdc++.h>
using namespace std;

int coinchange2(vector<int> &A, int B) {
    vector<int> dp(B+1,0);
    dp[0]=1;
    int m= 1e6+7;
    for(auto x: A){
        for(int i=x;i<=B;i++){
            dp[i]+=dp[i-x];
            dp[i]%=m;
        }
    }
    return dp.back();
}
