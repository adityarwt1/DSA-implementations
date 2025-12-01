#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /// build during constraction
    vector<int> prefixSum;

    Solution(vector<int>& nums){
        int n = nums.size();

        // for the avoid the segmentatoin faul
        prefixSum.resize(n);
        prefixSum[0] = nums[0];

        for(int i = 1 ; i < n ; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
    }

    int range(int l , int r){
        // start from the start
        if(l == 0 ) return prefixSum[r];
        
        // return the caluculate sum
        return prefixSum[r] - prefixSum[l-1];
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    Solution sol(nums);
    cout << sol.range(1,3) << endl;
    cout << sol.range(2,7);

    return 0;
}