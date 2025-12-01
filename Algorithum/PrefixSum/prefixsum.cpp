#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/**
 * i) intution for the prefixSum 
 * i) hamane observe kiya ki sum karate samay picchara sum include ho jata tha
 * ii) new array(vector) banaya jisame index ke hisab se picchala sum rahata tha
 * iii) ab picchala sum rahata tha to 1 se start karane ka yahi karan ban gaya
 */
    vector<int> prifixSum(vector<int> nums){
        vector<int> prefixSum(nums.size());

        // access the previous so first asign the value
        prefixSum[0] = nums[0];

        for(int i  = 1 ; i <  nums.size() ; i++){

            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        return prefixSum;
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