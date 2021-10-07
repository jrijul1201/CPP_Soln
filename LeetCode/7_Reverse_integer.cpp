/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/reverse-integer/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long reverse(long x) {    
        long ans = 0;
        int neg = INT_MIN;
        int n = INT_MAX;
        while(x){
            ans = ans*10 + (x%10);
            x = x/10;
        }
        
        if(n < ans || neg > ans){
            return 0;
        }
        return ans;
    }
};