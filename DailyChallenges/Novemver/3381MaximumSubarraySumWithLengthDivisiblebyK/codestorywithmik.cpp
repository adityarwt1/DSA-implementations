#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarraySuBrute(vector<int>& nums, int k) {
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

     long long maxSubarraySum(vector<int>& nums, int k) {

        vector<int> prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for(int i = 1  ; i< nums.size() ; i++){
            prefixSum[i]  = prefixSum[i-1] + nums[i];
        }


        long long result = LLONG_MIN;

        for(int start = 0 ; start < k ; start++){
                long long  currentSum = 0;

                int i  = start;

            while(i< nums.size() && i + k -1 < nums.size()){
                    int j = i + k -1;
                
                    long long subSum = prefixSum[j] - (i > 0  ? prefixSum[i-1] :0);

                    currentSum = max(subSum , currentSum + subSum);

                    result = max(result, currentSum);

                    i+= k;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2};
    long long result  = sol.maxSubarraySuBrute(nums , 1);
    cout << result << endl;
    // second try
    long long restult2 = sol.maxSubarraySum(nums, 1);
    cout << restult2 << endl;
    return 0;
}