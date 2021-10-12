/*  
    Difficulty :- Easy
    Ref :- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string str) {
        string ans = "";
        int stptr = -1;
        
        for(char c : str) {
            
            if(stptr == -1 || str[stptr] != c) {
                stptr++;
                str[stptr] = c;
            }
            
            else {
                stptr--;
            }
        }
        
        for(int i = 0 ; i<=stptr ; i++) {
            ans += str[i];    
        }
        
        return ans;
    }
};

