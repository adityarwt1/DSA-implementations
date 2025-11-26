#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low  = 0  , high  = nums.size() -1;

        while(low <= high){

            int mid = low + (high -low) /2;

            if(nums[mid] == target){
                return true;
            }

            // handles the duplicates

            if(nums[low] == nums[mid] || nums[mid] == target){
                low++;
                high--;
            }

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid -1;
                }else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low =mid + 1;
                }else{
                    high =mid -1;
                }
                
            }
        }

        return false;
    }
};
int main() {
    Solution sol;
    vector<int> example1 = {2,5,6,0,0,1,2};
    bool result1 = sol.search(example1 , 0);
    if(result1) cout << "first is true" << endl;
    vector<int> example2  = {2,5,6,0,0,1,2};
    bool result2 = sol.search(example2 , 3);
    if(result2) cout << "this false definetly" << endl;
    return 0;
}