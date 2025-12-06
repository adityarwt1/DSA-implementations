#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBoundary(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() -1 , ans = -1;

        while(low < high){

            int mid = (low + high) /2;
            
            if(nums[mid] >= target){ /// firsplate where target can appear
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
    vector<int> nums= { -1,0,3,5,9,12};
    int target = 9;

    int output  = sol.lowerBoundary(nums, target);

    cout << output<< endl;
    return 0;
}