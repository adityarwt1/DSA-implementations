#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int higherBoudary(vector<int>& nums , int target){
        int low =0 , high = nums.size() -1 , ans = -1;

        while(low <= high){

            int mid = (low + high)/2        ;

            if(nums[mid] > target){
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
    vector<int> nums= {2,3,5,5,5,7,11};
    int output = sol.higherBoudary(nums, 5);
    cout << output << endl;
    return 0;
}