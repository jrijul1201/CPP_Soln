/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000
Example 4:

Input: nums1 = [], nums2 = [1]
Output: 1.00000
Example 5:

Input: nums1 = [2], nums2 = []
Output: 2.00000


*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
   
    
        int n2=nums2.size();
        int n=n1+n2;// n is the  size of the final merged array 
        
        vector <double> merged;
        
        int i=0,j=0;
        
        //merging 2 sorted arrays and storing the final soted arry in a vector
        while(i<n1 && j<n2)
        {
            if(nums1[i] < nums2[j]){
                 merged.push_back(nums1[i]);
                 i++;
            }
        else
        {
            merged.push_back(nums2[j]);
            j++;
        }
        
       
}

while (i < n1)
{
         merged.push_back(nums1[i]);
         i++;
}
 
   
    while (j < n2){
         merged.push_back(nums2[j]);
         j++;
    }
   // int m=merged.size();
    
    double median=0.0;
    double k=0.0,s=0.0;
    //int n=merged.size();
    if(n%2==0)
    {
     k=(n/2)-1;
     
     s=((n/2)+1)-1;
     median=(merged[k]+merged[s])/2;
     
     
    }
    else 
    {
        k=n/2;
        median=merged[k];
        
    }
    return median;
       
}
        
    
};