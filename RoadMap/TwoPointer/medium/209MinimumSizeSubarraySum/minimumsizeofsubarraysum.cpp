#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // agar running sum bada hoga to shirk karana hai
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int minimumLength = INT_MAX;  // FIXED: Initialize correctly

        int left = 0;
        int runningSum = 0;

        for(int right = 0 ; right < nums.size() ; right++){
            
            runningSum += nums[right];

            // shrink the window when sum is larger // jabtak jyada hai
            while(runningSum >= target){

                // counting the lenght for the match the length
                minimumLength = min(minimumLength , right - left + 1);
                
                // remove the left sum to match the target
                runningSum -= nums[left];
                
                // shrinking the window
                left++;
            }

        }

        /// minimum lenght of the for
        if(minimumLength == INT_MAX) return 0;
        
        // giving the minnimum lenght
        else return minimumLength;
    }
};

int main() {
    Solution sol;
    vector<int> nums   ={ 2,3,1,2,4,3};
    int result = sol.minSubArrayLen(7 , nums);
    cout << result << endl;

    return 0;
}