#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        stack<int> stack;           // stores indexes waiting for next greater
        vector<int> ans(n, -1);     // default = -1

        // loop twice for circular behavior
        for(int i = 0 ; i < 2 * n; i++) {

            int indx = i % n;       // circular index

            // dry run:
            // while current element is greater than element at top index
            // assign the answer for that index
            while(!stack.empty() && nums[indx] > nums[stack.top()]) {

                // assign NGE for the popped index
                ans[stack.top()] = nums[indx];

                stack.pop();        // remove that index (answer found)
            }

            // only push during first pass
            if(i < n)
                stack.push(indx);   // push index waiting for its next greater
        }

        return ans;                 // final next greater element array
    }
};

int main() {
    Solution sol;
    vector<int> nums  = {1,2,1};
    vector<int> result = sol.nextGreaterElements(nums);
    return 0;
}