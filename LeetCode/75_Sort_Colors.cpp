/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/sort-colors/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0,0,0};
        
        for(int val : nums) {
            count[val]++;
        }
        
        int k = 0;
        
        for(int i = 0 ; i < 3 ; i++) {
            while(count[i] != 0) {
                nums[k++] = i;
                count[i]--;
            }
        }
    }
};