#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> prifixSum(vector<int> nums){
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];

        for(int i =  1; i < nums.size() ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        return prefix;
    } 
    
    
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    vector<int> result = sol.prifixSum(nums);
    for(int num: result){
        cout << num<< endl;
    }
    return 0;
}