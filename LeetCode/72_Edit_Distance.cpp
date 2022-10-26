/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/edit-distance/
    Author :- Ashutosh Sharma [https://github.com/ashu3103]
*/

#include<bits/stdc++.h>
using namespace std;

int help(int i,int j,string word1,string word2,vector<vector<int>>&dp){
    if(i>=word1.size()){
        return word2.size()-j;
    }
    if(j>=word2.size()){
        return word1.size()-i;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(word1[i]==word2[j]){
        return dp[i][j] = help(i+1,j+1,word1,word2,dp);
    }
    return dp[i][j] = 1+min(help(i+1,j,word1,word2,dp),min(help(i,j+1,word1,word2,dp),help(i+1,j+1,word1,word2,dp)));
}

int minDistance(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    vector<vector<int>> dp(n, vector<int>(m,-1));
    return help(0,0,word1,word2,dp);
}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<minDistance(s1,s2)<<endl;
    return 0;
}