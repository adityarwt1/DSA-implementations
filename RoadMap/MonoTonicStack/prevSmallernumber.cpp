#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> prevSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] <= nums[st.top()])
            st.pop();

        if (!st.empty()) ans[i] = st.top();

        st.push(i);
    }
    return ans;
}

};

int main() {
    Solution sol;
    
    return 0;
}