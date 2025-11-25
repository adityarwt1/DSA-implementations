#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){

            if(nums[i -1 ] > nums[i] ){
                count++;
            }

            if(count > 1){
                return false;
            }
        }

        

    }
};
int main() {
    Solution sol;
    
    return 0;
}