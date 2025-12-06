#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        /**
         * exmaple :-  [-1,0,3,5,9,12] , target = 9 
         * high = nums.size() -1 = 6 -1
         * 
         * while(low<= high) 
         * i) 
         * mid = 0+5 /2  = 2 
         * 
         * nums[2] < target = 3 < 9 to low = 2 +1 = 3
         * 
         * ii)binary search
        * (3 +5 ) /2 = 4 
        * nums[4] ==  target = 9 == 9 return mid (4);
         */
        int low = 0 , high = nums.size() -1;

        while(low <= high){

            int mid = (low + high) /2;
            
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                low = mid +1;
            }else{
                high = mid -1;
            }
            
        }

        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums= { -1,0,3,5,9,12};
    int target = 9;

    int output  = sol.search(nums, target);

    cout << output<< endl;
    return 0;
}