#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// intution 
// taking the whole sum and trying to make the sum equal to the both side

    int pivotIndex(vector<int>& nums) {
      int totalSum = 0;

      for(int i = 0 ; i < nums.size() ; i++){
        // total 
        totalSum += nums[i];
      }        


      // taking the left sum for the runtime comparision
      int leftSum = 0;
      for(int i  = 0 ; i  < nums.size() ; i++){

        int rightSum  = totalSum - leftSum - nums[i];

        if(rightSum  == leftSum){
          return i;
        }

        else{
          // current index sum karate jao kab plus hoga
          leftSum += nums[i];
        }
      }

      return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums ={1,7,3,6,5,6};
    int result = sol.pivotIndex(nums);
    cout << result << result;
    return 0;
}