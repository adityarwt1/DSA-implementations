#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterLeft(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            ans[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

};

int main() {
    Solution sol;
    
    return 0;
}