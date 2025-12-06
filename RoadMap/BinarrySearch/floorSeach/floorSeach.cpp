#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// target se chhota ya barabar dhoodana hai
    int floorSearch(vector<int>& nums, int target){
        int low = 0, high = nums.size() -1 , ans = -1;

        while(low < high){

            int mid = (low + high) /2;

            if(nums[mid] <= target){
                ans = mid;

                low = mid +1;
            }else{
                high = mid -1;
            }

        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    return 0;
}