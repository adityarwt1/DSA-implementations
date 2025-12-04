#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerNumber(vector<int>& nums){

        int n  = nums.size();

        vector<int> ans(n , 1);

        stack<int> stack;

        for(int i = 0 ; i < n ; i++){

            while(!stack.empty() && nums[i] <  nums[stack.top()]){
                ans[stack.top()] = nums[i];
                stack.pop();
            }

            stack.push(i);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,4,6,8,10};
    vector<int> output = sol.nextSmallerNumber(nums);

    for(auto num:nums){
        cout << num << endl;
    }
    return 0;
}