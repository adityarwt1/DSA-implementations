#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/// target se bada eleement
     int ceilValue(vector<int>& nums, int target){

        int low = 0, high = nums.size() -1 , ans = -1;

        while(low <= high){

            int mid = (low + high) /2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid -1;
            }else{
                low = mid +1;
            }

        }

        return ans;
     }
};

int main() {
    Solution sol;
    
    return 0;
}