#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size() - 1;
        int j = matrix[0].size() - 1;
        int i = 0;
        
        while(i <= r && j >= 0) {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] < target) 
                i++;
            else 
                j--;
        }
        return false;   
    }
};