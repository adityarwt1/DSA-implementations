#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // mistake taking ans -1 this is not allowed in the inser postion 
        // nums[mid ] is not less we need the highes insert posiotn so apply the the logic 
        int low = 0 ; 
        int high = nums.size() -1;
        int ans = nums.size(); /// the max insert point

        while(low <= high ){
            int mid  = floor((low + high) /2);

            if(target <= nums[mid]){// it mens number is big you can insert here 
                ans = mid;

                // trying to get the more lowest point
                high = mid -1;

            }else{
                low = mid +1;
            }
            
        }

        return ans;
    }
};
int main() {
    Solution sol;
    
    return 0;
}