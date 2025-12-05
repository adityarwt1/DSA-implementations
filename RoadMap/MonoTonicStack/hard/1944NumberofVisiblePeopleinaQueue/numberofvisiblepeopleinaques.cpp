#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n, 0);
        stack<int> st;  // monotonic decreasing stack (stores heights)

        // Process from right to left
        for (int i = n - 1; i >= 0; i--) {
            int count = 0;

            // Pop all shorter persons
            while (!st.empty() && st.top() < heights[i]) {
                st.pop();
                count++;
            }

            // If stack not empty, first taller person is visible
            if (!st.empty()) count++;
            ans[i] = count;

            // Push current person
            st.push(heights[i]);
        }

        return ans;
    }
};


int main() {
    Solution sol;
    
    return 0;
}