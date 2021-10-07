/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/zigzag-conversion/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        int currentRow = 0 , rowSpace = 0 ; 
        
	    if(numRows >= n  || numRows ==1) return s;
        
        string ans = "";
        
        rowSpace = numRows + numRows-2;
        int i;
        
        while(currentRow < numRows) {
            i = currentRow;
            
            if(currentRow == 0 || currentRow == numRows - 1) {
                while(i < n) {
                    ans += s[i];
                    i += rowSpace;
                }
            }
            
            else {
                while(i < n) {
                    ans += s[i];
                    if(i + rowSpace - 2*currentRow < n) {
                        ans +=(s[i + rowSpace - 2*currentRow]);
                    }
				    i+=rowSpace;
                }
            }
            currentRow++;
        }
        return ans;            
    }
};