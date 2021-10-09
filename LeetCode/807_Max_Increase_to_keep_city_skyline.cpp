/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/max-increase-to-keep-city-skyline/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rows (n,0);
        vector<int> cols (n,0);
        
        int maxi;
        
        for(int i = 0 ; i<n ; i++) {
            maxi = 0;
            for(int j = 0 ; j<n ; j++) {
                if(grid[i][j] > maxi) {
                    maxi = grid[i][j];
                }
            }
            rows[i] = maxi;
            
            maxi = 0;
            
            for(int j = 0 ; j<n ; j++) {
                if(grid[j][i] > maxi) {
                    maxi = grid[j][i];
                }
            }
            cols[i] = maxi;
        }
                
        
        int count = 0;
        int temp;
        
        for(int i = 0 ; i<n ; i++) {
            for(int j = 0 ; j<n ; j++) {
                temp = min(rows[i],cols[j]);
                if(grid[i][j] < temp) {
                    count += temp - grid[i][j];
                }
            }
        }
        return count;
    }
};