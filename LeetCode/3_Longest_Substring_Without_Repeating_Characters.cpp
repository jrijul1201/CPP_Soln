/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/3sum-closest/
    Author :- HarshitMittal01 [https://github.com/HarshitMittal01]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int a[95];
    void initialize(int a[95])
    {
        for(int i=0;i<95;i++)
        {
            a[i]=0;
        }
    }
    
    int lengthOfLongestSubstring(string s) 
    {
        
        if(s.length()==0)
        {
            return 0;
        }
        int loc=1,f=0,j;
        for(int i=0;i<s.length();i++)
        {
            initialize(a);
            f=0;
            for(j=i;j<s.length();j++)
            {
                if(a[int(s[j])-32]==0)
                {
                    a[int(s[j])-32]++;
                }
                else
                {
                    if((j-i)>loc)
                    {
                        loc=j-i;
                        f=1;
                    }
                    break;
                }
            }
            if(f==0)
            {
                if((j-i)>loc)
                {
                    loc=j-i;    
                }
            }
        }
        
        return loc;
    }
};
