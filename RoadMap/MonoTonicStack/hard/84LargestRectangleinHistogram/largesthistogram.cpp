#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stack;
        int n  = heights.size();
        int maxArea  = 0 ;


        for(int i = 0 ; i <= n ; i++){
                int currentHeight = (i== n ? 0 :heights[i]);


            while(!stack.empty() && currentHeight <  heights[stack.top()]){

                // if the i === n means reches the end
                int height = heights[stack.top()];

                // pop the top because need to ue ther nex value 
                stack.pop();

                int right = i;

                int left = stack.empty() ? -1 :stack.top();
                int width = right - left -1;

                maxArea = max(maxArea, height * width);

            }

            stack.push(i);
        }

        return maxArea;

    }
};

int main() {
    Solution sol;
    
    return 0;
}