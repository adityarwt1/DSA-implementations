#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sorting the number
        sort(nums.begin() , nums.end());
        
        // asdfasdfasdfasdf
        vector<vector<int> > result;

        for(int i =  0 ; i < nums.size() ; i++){

            // sking the left opart 
            if(i >= 0 && nums[i] == nums[i-1]) continue;


            int left = i +1;
            int right = nums.size() -1;

            while(left < right){
                // sum of three value
                int sum = nums[i] + nums[left] + nums[right];

                if(sum < 0){ // it means this iis teh negative and low value side
                    left++;
                }
                else if (sum > 0){
                    right--;
                }else{
                    result.push_back({nums[i] , nums[left] , nums[right]});

                    // skipping the duplicate
                    while(left < right  && nums[left] == nums[left+1]){
                        left++;
                    }

                    // skip duplicates at right
                    while(left < right && nums[right] == nums[right -1]){
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