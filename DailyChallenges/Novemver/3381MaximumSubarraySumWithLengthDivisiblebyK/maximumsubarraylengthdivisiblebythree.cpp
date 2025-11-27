#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        vector<int> prefixSum(nums.size()) ;
        long long maximumSum = INT_MIN;
        prefixSum[0] = nums[0];
        for(int i = 1; i < nums.size() ; i++){
            prefixSum[i] = prefixSum[i -1] + nums[i];
        }

        /// taking first windwo sum from k

        // int windowSum = 0;

        // for(int i = 0 ; i <= k ; i++){
        //     windowSum += nums[i];
        // }

        // maximumSum = max(windowSum, (int)maximumSum);
        // comaparing sum one by one for for the maximum
        for(int i = k ; i < nums.size() ; i++){
            maximumSum = max(nums[i] , (int)maximumSum);
        }


        return maximumSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums  = {1,2};
    long long result = sol.maxSubarraySum(nums , 1);
    cout << result << endl;
    return 0;
}