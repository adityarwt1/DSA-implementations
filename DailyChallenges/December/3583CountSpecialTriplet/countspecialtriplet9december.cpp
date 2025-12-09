#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        int n = nums.size();

        unordered_map<int, long long> leftFreq, rightFreq;

        // Count everything in right side initially
        for (int x : nums)
            rightFreq[x]++;

        long long ans = 0;

        // Iterate j as middle element
        for (int j = 0; j < n; j++) {

            // Remove nums[j] from right (because we cannot reuse j as k)
            rightFreq[nums[j]]--;

            long long target = nums[j] * 2LL;

            // Count special triplets
            ans = (ans + leftFreq[target] * rightFreq[target]) % MOD;

            // Add nums[j] to left side (for next iterations)
            leftFreq[nums[j]]++;
        }

        return ans;
    }
};


int main() {
    Solution sol;
    
    return 0;
}