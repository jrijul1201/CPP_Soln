/* 
   Find the duplicate Number
  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/find-the-duplicate-number/
    Author :- Arjyo Chakraborty [https://github.com/arjyo851]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow = nums[0];
       int fast = nums[0];
       do{
           slow = nums[slow];
           fast = nums[nums[fast]];
       }while(slow != fast);
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};