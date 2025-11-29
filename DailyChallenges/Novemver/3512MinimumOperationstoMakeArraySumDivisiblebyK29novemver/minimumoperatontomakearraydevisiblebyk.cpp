#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long totalSum = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){
          totalSum += nums[i];
        }

        return (int)totalSum% k;
    }
}; 
int main() {
    Solution sol;
    vector<int> nums = {3,9,7};
    int k = 5;
    int result = sol.minOperations(nums , k);
    cout << result << endl;
    return 0;
}