#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool increasingTripletBrute(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int k = 2;

        for(int i = 0 ; i < nums.size() -2; i++){

          if(nums[i] < nums[j] < nums[k]){
            return true;
          }else{
            i++;
            k++;
            j++;
          }
        }

        return false;

    }
    // intution flow hi to todata hai
    bool increasingTriplet(vector<int>& nums) {
        // comparing the fist valeu
        int first = INT_MAX;
        int second = INT_MAX;

        for(int num:nums){
          // flow tootane ka hi to wait karana hai
          // first condiont for the floow the sequence wise
          if(num<=  first){
            first = num;
          }else if(num<= second){
            second = num;
          }else{
            return true;
          }
        }

        return false;
    }
};
int main() {
    Solution sol;
    vector<int> nums= {1,2,3,4,5};

    bool result = sol.increasingTriplet(nums);
    if(result) cout << "This is the triplet";
    return 0;
}