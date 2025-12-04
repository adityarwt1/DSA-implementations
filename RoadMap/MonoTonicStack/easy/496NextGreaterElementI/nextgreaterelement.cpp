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
    vector<int> nums = {1,2,1};
    vector<int> output = sol.nextGreaterElements(nums);

    for(auto num:output){
        cout << num << endl;
    }
    return 0;
}
/// notte by own
/// hame num2 ke compition me nikalana ha isliye num to ka use karen
// start current eleme bada stack ke top se to top ke liye vahi great emelent hoga

// at the end of the agar eleme exist karata hai to vahi return kar dena hai

/// num nki value check karenge kya exist karenge
