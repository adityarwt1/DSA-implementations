#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0 ; 

        for(int i = 0 ; i < nums.size() ; i++){
          if(nums[i] != 0){
            swap( nums[j] , nums[i]);
            j++;
          }
        }
    }
};

int main() {
    Solution sol;
    
    return 0;
}