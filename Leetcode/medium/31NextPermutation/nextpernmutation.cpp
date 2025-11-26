#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n  = nums.size();


        // findint the blue box index 
        int gola_index = -1;

        for(int i = n-1 ; i > 0 ; i--){
            if(nums[i] > nums[i-1]){
                gola_index= i -1;
                break;
            }
        }


        if(gola_index != -1){
        int swap_index = gola_index;


        for(int j = n -1 ; j > gola_index ; j--){
            if(nums[j] > nums[gola_index]){
                swap_index = j;
                break;
            }
        }


        // swap those found theseaer the anaser
        swap(nums[swap_index ] , nums[gola_index]);
        }
        reverse(nums.begin() + gola_index +1  , nums.end());

    }
};

int main() {
    Solution sol;
    
    return 0;
}