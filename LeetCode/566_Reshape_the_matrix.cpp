/*  
    Difficulty :- Easy
    Ref :- https://leetcode.com/problems/reshape-the-matrix/
    Author :- AmitThakur [https://github.com/AmitThakur045]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if(m*n != r*c)
            return mat;
        vector<vector<int>> tmp(r, vector<int>(c, 0));
        int k = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++, k++) {
                tmp[k / c][k % c] = mat[i][j];
            }
        }
        return tmp;
    }
};