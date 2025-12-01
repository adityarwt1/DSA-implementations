#include <bits/stdc++.h>
using namespace std;


   class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixSum(nums.size());

        prefixSum[0] = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){
          prefixSum[i]  = prefixSum[i -1] + nums[i];
        }

        return prefixSum;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4};
    vector<int> prefixSum  = sol.runningSum(nums); // [1,3,6,10]
    return 0;
}