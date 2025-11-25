#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // mistake taking nums.size() instead of nums.size() -1;
        /// not return minuse value in the last
        int low = 0;
        int high = nums.size() -1;

        while(low <= high){
            int mid = floor((low + high) /2);

            if(nums[mid] == target){
                return mid;
            }

            else if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid  -1;
            }
            
        }

        return -1;
    }
};

int main() {
    Solution sol;
    // example
    vector<int> example1 = {-1,0,3,5,9,12};
    int target1 = 9;
    int solution1 = sol.search(example1 , target1);
    cout<< solution1 << endl;
    
    /// example two
    vector<int> example2  = {-1,0,3,5,9,12};
    int target2 = 2;
    int solution2 = sol.search(example2 , target2);
    cout<< solution2 << endl;
    return 0;
}