#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st; // stores indexes

        for (int i = 0; i < n; i++) {

            // while current day is hotter than day at top of stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev = st.top();
                st.pop();
                ans[prev] = i - prev;
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