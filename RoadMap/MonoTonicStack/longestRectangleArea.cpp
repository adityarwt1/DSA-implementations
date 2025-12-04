#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
    int n = h.size();
    stack<int> st;
    int maxA = 0;

    for (int i = 0; i <= n; i++) {

        int curr = (i == n ? 0 : h[i]);

        while (!st.empty() && curr < h[st.top()]) {
            int height = h[st.top()];
            st.pop();

            int right = i;
            int left = (st.empty() ? -1 : st.top());

            int width = right - left - 1;
            maxA = max(maxA, height * width);
        }

        st.push(i);
    }

    return maxA;
}

};

int main() {
    Solution sol;
    
    return 0;
}