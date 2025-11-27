#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long ans = LLONG_MIN;
        
        // prefix sum
        vector<int> prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for(int i = 1  ; i< nums.size() ; i++){
            prefixSum[i]  = prefixSum[i-1] + nums[i];
        }


        // finding the value
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i; j < nums.size() ; j++){
                long long sum = prefixSum[j] - prefixSum[i-1];
                if(sum % k ==0){
                    ans = max(sum, ans);
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2};
    long long result  = sol.maxSubarraySum(nums , 1);
    cout << result << endl;
    return 0;
}