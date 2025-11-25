#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size() ; //hhanding heavy number

        // rotate the whole array
        reverse(nums.begin()  , nums.end());

    //   reverseing fcrom the k the value
        reverse(nums.begin() , nums.begin() +k);

        // reversing the remaining part
        reverse(nums.begin() + k , nums.end());
    }
};

int main() {
    Solution sol;
    
    return 0;
}