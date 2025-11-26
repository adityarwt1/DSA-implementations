#include <bits/stdc++.h>
using namespace std;

/// intitution shuru se shuruata karan hai
// use value ko use nahi karana hai 
// backtracking ka use karana hia

class Solution {
public:
    int n;
    vector<vector<int>> result;
    unordered_set<int> set;

    void solve(vector<int>nums, vector<int> temp){

        // base case of recursion 
        if(temp.size() == n){
            result.push_back(temp);
            return ;
        }

        for(int i = 0 ; i < n ; i++){

            if(set.find(nums[i]) == set.end()){

                temp.push_back(nums[i]);
                set.insert(nums[i]);
                // also telling to the set

                solve(nums,  temp);

                set.erase(nums[i]);


                // remove from the temp
                temp.pop_back();
                set.erase(nums[i]);
            }

        }
    }
    vector<vector<int>> permutation(vector<int> nums){

        
    }
};

int main() {
    Solution sol;
    
    return 0;
}