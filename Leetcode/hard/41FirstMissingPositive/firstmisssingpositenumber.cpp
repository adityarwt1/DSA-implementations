#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Place numbers in correct positions
        for (int i = 0; i < n; i++) {
            // Swap numbers to their correct positions
            while (nums[i] > 0 && nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[nums[i] - 1], nums[i]);
            }
        }

        // Find first missing positive number
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }

    int firstPositiveNumberintuition(vector<int>& nums){
        // for the sise 
        int n = nums.size();


        /// place everthing in the correct order

        for(int i = 0 ; i < n ; i++){

            /// swap number to there correnct positons // poahali condiotntacle ho jyegi circular element not equat to tghe current eleemtn
            while(nums[i] >0 && nums[i] <= n && nums[nums[i] -1] != nums[i]){
                swap(nums[nums[i] -1] , nums[i]);
            }
        }


        // find first missible number
        for(int i  = 0 ; i < n ; i++){
            if(nums[i] != i+1 ){
                return i+1;
            }
        }

        // otherwise retyurn the 
        return n +1;
    }
};
int main() {
    Solution sol;
    
    return 0;
}