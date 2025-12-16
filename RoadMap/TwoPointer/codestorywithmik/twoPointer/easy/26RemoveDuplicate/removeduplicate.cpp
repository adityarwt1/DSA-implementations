#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k  = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != nums[i+1]){
                nums[k++] = nums[i];
            }

                }        }
};

int main() {
    Solution sol;
    
    return 0;
}