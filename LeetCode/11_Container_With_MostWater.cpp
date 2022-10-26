/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/container-with-most-water/
    Author :- Ashutosh Sharma [https://github.com/ashu3103]
*/

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int ptr1 = 0;
    int ptr2 = n-1;
    int ans = INT_MIN;
    while(ptr1<ptr2){
        ans = max(ans, (ptr2-ptr1)*min(height[ptr1],height[ptr2]));
        if(height[ptr1]>height[ptr2]){
            ptr2--;
        }else{
            ptr1++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    cout<<maxArea(heights)<<endl;
    return 0;
}