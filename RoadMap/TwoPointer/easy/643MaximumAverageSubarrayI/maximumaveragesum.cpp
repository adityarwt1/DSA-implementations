#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double maxAvg = INT_MIN;

        int windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        // curreentAverage '
        maxAvg = (double) windowSum /k;

        

        for (int i = k; i < nums.size(); i++) {
            // removing previous element in the window
            windowSum -= nums[i-k];
            // addding new element in the windowSum
            windowSum += nums[i];

             double currentAvg = (double) windowSum/k;
            if(currentAvg > maxAvg){
              maxAvg  = currentAvg;
            }
        }

        return maxAvg;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,12,-5,-6,50,3};
    double output = sol.findMaxAverage(nums , 4);
    cout << output << endl;
    return 0;
}