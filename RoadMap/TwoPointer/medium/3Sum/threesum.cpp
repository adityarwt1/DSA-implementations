#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sorting the number
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> result;

        for(int i = 0; i < nums.size(); i++) {

            // skipping the left part (duplicate of nums[i])
            if(i > 0 && nums[i] == nums[i - 1]) continue;  // FIXED

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {

                // sum of three value
                int sum = nums[i] + nums[left] + nums[right];

                if(sum < 0) {  // negative → need bigger value
                    left++;
                }
                else if(sum > 0) { // positive → need smaller value
                    right--;
                }
                else {

                    result.push_back({nums[i], nums[left], nums[right]});

                    // skipping duplicates at left
                    while(left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    // skip duplicates at right
                    while(left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                }
            }
        }

        return result;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = sol.threeSum(nums);

    // number of result
    // for(auto &num:result){
    // }

    return 0;
}