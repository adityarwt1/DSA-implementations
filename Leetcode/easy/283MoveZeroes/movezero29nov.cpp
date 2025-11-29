#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // taking the fixed index for the no zeros
        int index = 0 ; 


        for(int i = 0 ; i < nums.size() ; i++){
            // if the index is not equact to zero
            // swappint non zero and increasing the left posiont for the next non zero element
            if(nums[i] != 0){
                swap(nums[i] , nums[index]);
                index++;
            }
        }


    }
};
int main() {
    Solution sol;
    vector<int> nums = { 0,1,2,0,3};
    sol.moveZeroes(nums);
    for(int num: nums){
        cout << num << endl;
    }
    return 0;
}
/// here i have learned the fixed posion for the next element accorgin to logic
/// the index fix position make this whole question easy.