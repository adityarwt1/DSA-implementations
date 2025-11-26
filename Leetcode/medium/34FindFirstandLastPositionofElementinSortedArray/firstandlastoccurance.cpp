#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int firstOccurace(vector<int>& nums, int target){

        int low = 0 ; 
        int high = nums.size() -1 ;
        int ans   = -1;
        while(low <= high){

            int mid = floor((low + high) /2);

            if(nums[mid] == target){
                ans = mid;

                high = mid -1; /// looking for the left 
            }
            /// if by chance chhota hia to left ki side le jao
            else if( nums[mid] >target){
                high = mid - 1;
            }
            else {
                low= mid +1;
            }
        }

        return ans;
    }

    int lastOccurance (vector<int>& nums , int target){

        int low = 0 , high = nums.size() -1 , ans = -1;

        while(low <= high){

            int mid = floor((low + high) /2);

            if(nums[mid] == target){

                ans = mid;

                // looking for the right

                low = mid +1 ;// this is the diffrence before and now

            }
            else if(nums[mid] > target){
                high  = mid -1;
            }
            else{
                low = mid +1;
            }
        }

        return ans;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2 , -1);

        // size of the array
       if(nums[firstOccurace(nums, target)] != target || nums[lastOccurance(nums, target)] != target){
        return {-1, -1};
       }

       else{
        return {firstOccurace(nums, target) , lastOccurance(nums, target)};
       }



    }
};
int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> result = sol.searchRange(nums, 8);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}