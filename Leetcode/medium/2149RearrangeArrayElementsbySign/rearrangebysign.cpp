#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int positiveIndex = 0;
        int negativeIndex= 1;

        for(int i = 0 ; i < nums.size() ; i++){

          if(nums[i] < 0){
              ans[negativeIndex] = nums[i];
              negativeIndex += 2;
          }
          else{
            ans[positiveIndex] = nums[i];
            positiveIndex += 2;
          }
        }

        return ans;
    }
};
int main() {
    Solution sol;
    
    return 0;
}