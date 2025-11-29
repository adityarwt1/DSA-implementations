#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/**
 * this algo come frorm the vote
 */
    int majorityElement(vector<int>& nums) {
        /// ele
        int ele = nums[0];
        int count = 1;

        for(int i = 1 ; i < nums.size() ; i++){

            // element ka cout kam hogaya hoi
            if(count == 0){
                ele = nums[i];
            }

            /// decrease the counter of elemen
            if(nums[i] != ele){
                count--;
            }

            else{
                count++;
            }

        }

        return ele;
    
    }
};
int main() {
    Solution sol;
    vector<int> nums  = {3,2,3};
    int number  = sol.majorityElement(nums );
    cout << number << endl;

    return 0;
}