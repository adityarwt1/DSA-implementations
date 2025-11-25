#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // global becuase making consistence code
    int n ;

    vector<vector<int>> result;
    unordered_set<int> set;

    void solve(vector<int> temp, vector<int> nums){
            /// writting the base conditon for the purmutatoin
            if(temp.size() == n){
                result.push_back(temp);
                return ;
            }

            for(int i  = 0 ; i < n ; i++){

                if(set.find(nums[i]) == set.end()){
                    // isert to and explored
                    temp.push_back(nums[i]);
                    set.insert(nums[i]);
                    // insert for knowing it is couted
                    solve(temp, nums);
                    // remove for not taken case
                    temp.pop_back();
                    set.erase(nums[i]);
                }
            }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        // for the storing the current element
        vector<int> temp;

        // recurstion cal
        solve(temp, nums);

        return result;
    }
};
int main() {
    Solution sol;
    
    return 0;
}