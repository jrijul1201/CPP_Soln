/*
Problem : Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity. 

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]


*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<1){
            return {-1,-1}; 
        }
        if(n==1){
            if(nums[0]==target){
                return {0,0};
            }else{
                return {-1,-1};
            }
        }
        int start=0;
        int end=n-1;
        int mid;
        int found=-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]>target){
                end=mid-1;
            }else if(nums[mid]==target){
                found=1;
                break;
            }else{
                start=mid+1;
            }
        }   
        if(found==-1){
            return {-1,-1};
        }

        // now expand in both directions
        int rightindex=mid;
        int leftindex=mid;
        while(rightindex<n-1&&nums[rightindex+1]==target){
            rightindex++;
        }
        while(leftindex>0&&nums[leftindex-1]==target){
            leftindex--;
        }
        return {leftindex,rightindex};
        
    }
};