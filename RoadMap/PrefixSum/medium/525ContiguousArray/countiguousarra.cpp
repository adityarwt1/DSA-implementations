#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// ham pata kar rahe hai ki scene hai ya nahi hai
/// converting zero to -1
    int findMaxLength(vector<int>& nums) {
      unordered_map<int , int> map;

      /// converting zero to minus two
      map[0] = -1;

      int prefixSum = 0 ;
      int maxLength = 0;

      for(int i = 0 ; i< nums.size() ;i++){

        if(nums[i] == 0){
          prefixSum += -1;
        }else{
          prefixSum += 1;
        }

        // finding the last scene
        if(map.find(prefixSum) != map.end()){
          // for the comparison fo lenght
          int length = i - map[prefixSum];
          maxLength  = max(length , maxLength);
        }
    else{
        // store the i element
        map[prefixSum] = i;
        }
      }

      return maxLength;

    }
};
int main() {
    Solution sol;
    vector<int> nums  = {0,1,1,1,1,1,0,0,0};
    int result  = sol.findMaxLength(nums);
    cout << result <<endl;
    return 0;
}