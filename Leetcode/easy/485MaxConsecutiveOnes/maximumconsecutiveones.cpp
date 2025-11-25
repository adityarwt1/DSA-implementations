#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = INT_MIN;

        for(int i  = 0 ; i < nums.size() ; i++){
          if(nums[i] == 1){
            count++;
          }
          else{
                
                if(count >= maxi){
                  maxi = count;
                }
            count =0;
          }
        }

        if(count >= maxi){
          maxi = count;
        }
        return maxi;
    }
};
int main() {
    Solution sol;
    
    return 0;
}