#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currentSum  = 0 ; 
      int maxSum = INT_MIN;
      
      for(int i = 0 ; i < nums.size() ; i++){
        currentSum += nums[i];

        if(currentSum > maxSum ){
          maxSum = currentSum ;
        }
        if(currentSum < 0){
          currentSum = 0;
        }
        
      } 

      return maxSum ;  
    }
};

int main() {
    Solution sol;
    
    return 0;
}