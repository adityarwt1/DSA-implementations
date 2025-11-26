#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 ; 
        int high = nums.size() -1;

        while(low < high){
            // 
            int mid = (low + high) /2;

            if(nums[mid] >nums[mid + 1]){
                high = mid;
            }
            else{
                low= mid+1;
            }

        }

        return low;
    }
};
int main() {
    Solution sol;
    vector<int> nums= {1,2,3,1};
    int resutl = sol.findPeakElement(nums);
    cout << resutl << endl;
    vector<int> example2 = {1,2,1,3,5,6,4};
    int result2 = sol.findPeakElement(example2);
    cout << result2 << endl;
    return 0;
}