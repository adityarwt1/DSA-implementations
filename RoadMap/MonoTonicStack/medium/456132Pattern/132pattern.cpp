#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //// hrer sit eh for checking the
        stack<int> stack;

        int second = INT_MIN;
        int n = nums.size();
        for(int i = n-1 ; i >= 0 ; i--){
            
            if(nums[i] < second){
                return true;
            }

            while(!stack.empty() && nums[i] >  stack.top()){
                second = stack.top();
                stack.pop();
            }

            stack.push(nums[i]);
            
            
            }

            return false;
    }
};

int main() {
    Solution sol;
    
    return 0;
}