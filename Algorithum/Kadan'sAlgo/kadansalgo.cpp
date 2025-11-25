#include <bits/stdc++.h>
using namespace std;
// kadans if negative ingter don't need to take it
class Solution {
public:
    int maximumSum(vector<int> nums){

        int maxsum = INT_MIN;
        int currentSum = nums[0];

        for(int i  = 0 ; i < nums.size() ; i++){
            // taking current sum 
            currentSum += nums[i];

            if(currentSum > maxsum){
                maxsum = currentSum;
            }

            else{
                currentSum  = 0;
            }
        }
        return maxsum;
    }
};

int main() {
    Solution sol;
    
    return 0;
}