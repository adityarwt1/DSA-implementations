#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for(int x : nums) totalSum += x;

        int n = nums.size();

        // If total sum is odd -> difference will always be odd
        if (totalSum % 2 == 1)
            return 0;

        // If total sum is even -> all partitions valid
        return n - 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = { 10,10,3,7,6};

    int totalNumberOfEvenPartiitonsum = sol.countPartitions(nums);

    cout << totalNumberOfEvenPartiitonsum << endl;
    return 0;
}