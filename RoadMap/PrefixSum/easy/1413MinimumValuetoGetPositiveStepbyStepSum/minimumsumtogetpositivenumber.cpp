#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/**
 * intuition for this video
 * i) agar dip hai to isaka matlab usase age usame se add karane par milane vala value hi hoga
 */

 int minStartValue(vector<int>& nums){
    // counting the runtime prefix sum for the runtime comparision
    int prefixSum  = 0 ; // starting from zero because also start the minimum from the 1

    // minimum prefix mainly for the negative value for  the
    int miniPrefix = INT_MAX;

    for(int num:nums){
        // addiingb runtime prefix
        prefixSum += num;

        // comparison of the current and old prefix sum
        miniPrefix = min(prefixSum, miniPrefix);
    }

    // if the number is positive need to start with the one it will always give the number 
    if(miniPrefix >= 0) return 1;

    // for the negatinve4 value always nutralize it
    return 1 - miniPrefix;

 }
    
};

int main() {
    Solution sol;
    vector<int> nums  = {-3,2,-3,4,2};

    int result = sol.minStartValue(nums); // handle the specially for the negative values
    cout << result << endl; // 5 need to start with the five to always get the greater than on 
    return 0;   
}