#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaderOfArray(vector<int>& nums){
        int n = nums.size();
        vector<int> ans;
        int max = INT_MIN;
        for(int  i = n -1 ; i >= 0 ; i--){

            if(nums[i] > max){
                ans.push_back(nums[i]);
                max = nums[i];
                cout << max <<endl;
            }
            
        }   

        return ans;

    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 7, 1, 0};
    sol.leaderOfArray(nums); /// 0,1,7
    return 0;
}