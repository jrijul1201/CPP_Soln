/*  
    Difficulty :- Easy
    Ref :- https://leetcode.com/problems/bitwise-and-of-numbers-range/
    Author :- AmitThakur [https://github.com/AmitThakur045]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == 0)
            return 0;
        int count_shift = 0;
        while(left != right) {
            left = left >> 1;
            right = right >> 1;
            count_shift++;
        }
        return left << count_shift;
    }
};

