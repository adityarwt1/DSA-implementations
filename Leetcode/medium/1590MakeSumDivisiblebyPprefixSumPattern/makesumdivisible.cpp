#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) total += x;

        long long target = total % p;
        if (target == 0) return 0;

        unordered_map<long long, int> mp;
        mp[0] = -1;

        long long prefix = 0;
        int best = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            prefix = (prefix + nums[i]) % p;

            long long need = (prefix - target + p) % p;

            if (mp.find(need) != mp.end()) {
                best = min(best, i - mp[need]);
            }

            mp[prefix] = i;  
        }

        return best == nums.size() ? -1 : best;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {3,1,4,2};
    int p = 6;
    int result = sol.minSubarray(nums , p);
    cout << result << endl;
    return 0;
}