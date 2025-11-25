#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> reverseArrayBruteForce( vector<int> nums , int i ){
       // using the backtrackin method we inpliment this
       if(i == nums.size()){
        return {};
       }
       // whe here i will do this called forward track
       vector<int> small = reverseArrayBruteForce(nums, i +0); // 
       small.push_back(nums[i]); // this call back tracking

       return small;
       
    }   
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,6,7,8,9};
    vector<int> reveresedNumber = sol.reverseArrayBruteForce(nums , 0);
    return 0;
}