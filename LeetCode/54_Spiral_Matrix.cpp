/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/spiral-matrix/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        
        int startrow = 0 , endrow = n-1 , startcol = 0 , endcol = m-1;

        while(startcol <= endcol && startrow <= endrow) {
            // start row
            for(int j = startcol ; j<=endcol ; j++) {
                ans.push_back(matrix[startrow][j]);
            }

            // end col
            for(int j = startrow+1 ; j<=endrow ; j++) {
                ans.push_back(matrix[j][endcol]);
            }

            // end row
            for(int j = endcol-1 ; j>=startrow ; j--) {
                if(startrow == endrow) {
                    break;
                }
                ans.push_back(matrix[endrow][j]);
            }
        
            // start col
            for(int j = endrow-1 ; j>=startrow+1 ; j--) {
                // Avoids duplicate printing of elements
                if(startcol == endcol) {
                    break;
                }
                ans.push_back(matrix[j][startcol]);
            }

            // variable updated
            startrow++;
            endrow--;
            startcol++;
            endcol--;
        }      
        return ans;
    }
};