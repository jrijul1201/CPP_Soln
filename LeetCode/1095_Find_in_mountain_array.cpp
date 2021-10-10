/*  
    Difficulty :- Hard
    Ref :- https://leetcode.com/problems/find-in-mountain-array/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int search_in_left(int target, MountainArray &mountainArr , int s , int e) {
        int mid;
        int middle;
        
        while(s <= e){
            mid = s + ((e-s)>>1);
            middle = mountainArr.get(mid);
            
            if(middle == target){
                return mid;
            }
            
            else if(middle > target){
                e = mid-1;
            }
            
            else{
                s = mid+1;
            }
        }
        return -1;
    }
    
    int search_in_right(int target,MountainArray &mountainArr,int s, int e){
        int mid;
        int middle;
        
        while(s <= e){
            mid = s + ((e-s)>>1);
            middle = mountainArr.get(mid);
            
            if(middle == target){
                return mid;
            }
            
            else if(middle > target){
                s = mid+1;
            }
            
            else{
                e = mid-1;
            }
        }
        return -1;
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int e = n-1;
        int s = 0;
        int mid;
        
        while(s < e){
            mid = s + ((e-s)>>1);
            
            if(mountainArr.get(mid) > mountainArr.get(mid+1)){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }
        
        int left = search_in_left(target,mountainArr,0,s);
        
        if(left == -1){
            return search_in_right(target,mountainArr,s,n-1);
        }
        return left;
    }
};