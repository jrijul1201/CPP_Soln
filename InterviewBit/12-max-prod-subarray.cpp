/*  
    Difficulty :- Medium
    Ref :- https://www.interviewbit.com/problems/max-product-subarray/
*/

#include <bits/stdc++.h>
using namespace std;

int maxProduct(const vector<int> &A) {
    int ma=1,mi=1, ans=INT_MIN;
    for(auto x: A){
        if(x<0){
            swap(ma,mi);
        }
        ma= max(x, ma*x);
        mi= min(x, mi*x);
        ans= max(ma, ans);
    }
    return ans;
}
