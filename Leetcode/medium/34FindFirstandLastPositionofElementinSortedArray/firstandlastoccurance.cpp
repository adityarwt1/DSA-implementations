#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int firstOccurance(vector<int>& nums ,int target){
        int low = 0, high = nums.size() - 1, ans = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;     // go left
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }

    int lastOccurance(vector<int>& nums , int target){
        int low = 0, high = nums.size() - 1, ans = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;       // go right
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);  // FIXED SIZE

        ans[0] = firstOccurance(nums, target);
        ans[1] = lastOccurance(nums, target);

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> result = sol.searchRange(nums, 8);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}