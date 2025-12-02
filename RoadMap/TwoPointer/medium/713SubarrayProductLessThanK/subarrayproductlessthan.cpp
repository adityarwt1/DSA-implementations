#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k <= 1) return 0;

        int left = 0;
        long long product = 1;
        int count = 0;

        for(int right = 0; right < nums.size(); right++) {

            product *= nums[right];

            while(product >= k) {
                product /= nums[left];
                left++;
            }

            // All windows ending at 'right' are valid
            count += (right - left + 1);
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums   = {10,5,2,6};
    int result = sol.numSubarrayProductLessThanK(nums, 100);


    cout << result << endl;
    return 0;
}