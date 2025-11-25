#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int num:nums){
          ans ^= num;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    return 0;
}