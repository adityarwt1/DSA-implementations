#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, -1);
        stack<int> st;

        // Traverse the array twice (circular)
        for(int i = 0; i < 2 * n; i++) {

            int idx = i % n;

            while(!st.empty() && nums[idx] > nums[st.top()]) {
                ans[st.top()] = nums[idx];
                st.pop();
            }

            // Only push during first round
            if(i < n) st.push(idx);
        }

        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums1 = {1,2,4,6,8,9};
    vector<int> result = sol.nextGreaterElements(nums1);
    for(auto num:result){
        cout << num << endl;
    }
    return 0;
}