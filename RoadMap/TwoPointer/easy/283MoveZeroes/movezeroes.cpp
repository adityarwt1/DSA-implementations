#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for(int i = 0 ; i< nums.size() ; i++){

          // if this is not a zero
          if(nums[i] != 0){
            swap(nums[i] , nums[index]);

            index++;
          }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};

    sol.moveZeroes(nums);

    
    return 0;
}