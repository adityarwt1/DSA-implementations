#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/**
 * intution is we notices wen the current prefix sum equl to the previous sum so itmean there is the zero 
 * 
 */
    void moveZeroes(vector<int>& nums) {
        vector<int> prefixSum(nums.size());
        
        prefixSum[0] = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){

            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        
        for(int i = 1 ; i < nums.size() ;i++){


        }
    }
};

int main() {
    Solution sol;
    
    return 0;
}