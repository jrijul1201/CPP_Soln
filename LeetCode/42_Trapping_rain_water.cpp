/*  
    Difficulty :- Hard
    Ref :- https://leetcode.com/problems/trapping-rain-water/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& arr) {
        int water = 0;
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int left = 0 , right = 0;
        
        while(low < high){
            if(arr[low] <= arr[high]){
                if(arr[low] >= left){
                    left = arr[low];
                }
                else{
                    water += left - arr[low];
                }
                low++;
            }
            else{
                if(arr[high] >= right){
                    right = arr[high];
                }
                else{
                    water += right - arr[high];
                }
                high--;
            }
        }
        return water;
    }
};