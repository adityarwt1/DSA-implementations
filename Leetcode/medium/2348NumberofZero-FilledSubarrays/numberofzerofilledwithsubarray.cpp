#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long maxCount = 0;
        int zeroCount = 0;

        // for the on by one element
        for(int num:nums){
          /// isZero increase the zero strak
          if(num == 0){
            zeroCount++;
          }

          // when one comes out 
          else{
            // because the subarray plus
          maxCount += zeroCount * (zeroCount + 1LL)/2;

          // making the zero count to zero 
          zeroCount = 0 ;
          }
        }

        // for the at the end because one missed here
        maxCount  += zeroCount * (zeroCount + 1LL)/2;


        return maxCount;
    }
};
int main() {
    Solution sol;
    vector<int> nums  = {1,3,0,0,2,0,0,4};
    long long result = sol.zeroFilledSubarray(nums);
    // expected output is 6
    cout << result << endl;
    return 0;
}