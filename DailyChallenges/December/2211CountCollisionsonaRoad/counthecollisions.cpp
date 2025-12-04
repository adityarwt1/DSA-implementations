#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {

        int n = directions.size();
        int left = 0, right = n - 1;

        // skip all L's at left edge
        while (left < n && directions[left] == 'L')
            left++;

        // skip all R's at right edge
        while (right >= 0 && directions[right] == 'R')
            right--;

        int collisions = 0;

        // count moving cars in the middle region
        for (int i = left; i <= right; i++) {
            if (directions[i] == 'L' || directions[i] == 'R') {
                collisions++;
            }
        }

        return collisions;
    }
};


int main() {
    Solution sol;
    string directions = "RLRSLL";
    int output = sol.countCollisions(directions);
    return 0;
}