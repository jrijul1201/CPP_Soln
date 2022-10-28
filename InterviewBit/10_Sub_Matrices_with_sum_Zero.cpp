/*  
    Difficulty :- medium
    Ref :- https://www.interviewbit.com/problems/sub-matrices-with-sum-zero/
*/

#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int> > &A) {
    unordered_map<int, int> mp;
    int ans=0, sum=0;
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            if(i!=j){
                for(int k=0;k<A[j].size();k++) A[i][k]+=A[j][k];
            }
            mp.clear();
            sum=0;
            mp[sum]++;
            for(auto x: A[i]){
                sum+=x;
                if(mp.find(sum)!=mp.end()){
                    ans+=mp[sum];
                }
                mp[sum]++;
            }
        }
    }
    return ans;
}
