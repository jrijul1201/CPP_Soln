/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> nums , int s , int e , int target){
        int mid;
        while(s <= e){
            mid = s + ((e-s)>>1);
            
            if(nums[mid] == target){
                return mid;
            }
            
            else if(nums[mid] > target){
                e = mid-1;
            }
            
            else{
                s = mid+1;
            }
        }
        return -1;
    }
    
    int pivot_search(vector<int> nums , int s , int e , int target){
        int mid;
        while(s <= e){
            mid = s + ((e-s)>>1);
            
            if(mid < e && nums[mid] > nums[mid+1]){
                return mid;
            }
            
            if(mid > s && nums[mid-1] > nums[mid]){
                return mid-1;
            }
            
            if(nums[mid] == nums[s] && nums[mid] == nums[e]){
                // what if these are the pivot elements so first check them 
                
                
                if(s < e && nums[s] > nums[s+1]){
                    return s;
                }
                
                s++;
                
                if(e > s && nums[e-1] > nums[e]){
                    return e-1;
                }
                
                e--;
            }
            
            // left side is sorted so pivot should be on the right
            else if(nums[s] < nums[mid] || (nums[s] == nums[mid] && nums[mid] > nums[e])){
                s = mid+1;
            }
            
            else{
                e = mid-1;
            }
            
        }
        return -1;
    }
    
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        
        if(n == 1){
            return nums[0] == target;
        }
        
        int pivot = pivot_search(nums,0,n-1,target);
        
        if(pivot == -1){
            if(search(nums,0,n-1,target) == -1){
                return false;   
            }
            else{
                return true;
            }
        }
        
        if(nums[pivot] == target){
            return true;
        }
        
        if(target >= nums[0]){
            if(search(nums,0,pivot-1,target) == -1){
                return false;
            }
            else{
                return true;
            }
        }   
        
        if(search(nums,pivot+1,n-1,target) == -1){
            return false;
        }
        return true;
    }
    
};