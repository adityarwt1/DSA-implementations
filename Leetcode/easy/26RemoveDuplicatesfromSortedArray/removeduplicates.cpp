#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

          int k = 1;
        for(int i = 1 ; i < nums.size() ; i++){
          if(nums[i] != nums[i - 1]){
            nums[k] = nums[i];
            k++;
          }

        }

        return k;
    }

    /**
     * i) declare the k = 1 because we comparing the previous value 
     * ii) agar current value previous value ke barabar nahi hai to k to fixed se exchange karana hai
     * ii) k++ for the where we are replace the value
     */

     int removeDuplicate(vector<int>& nums){
      // for the fixed 
      int k = 1;

      // starting from the one becuase need to compare with the previous value
      for(int i  = 1; i < nums.size() ; i++ ){

        // comparing previous value
        if(nums[i] != nums[i -1]){
          // replaced
          nums[k] = nums[i];

          // increased for the next time
          k++;
        }
      }

      // return how many time k moves
      return k;
     }
};
int main() {
    Solution sol;
    vector<int> nums  = { 1,1,1,1,2,2,2,2,3,3,3,3,3,3,3};
    int result = sol.removeDuplicate(nums);
    cout << result << endl;
    return 0;
}