#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int maxArea = 0;

        while (left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);
            int area = width * h;

            maxArea = max(maxArea, area);

            // move the smaller height pointer
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};

int main() {
    Solution sol;
    
    return 0;
}