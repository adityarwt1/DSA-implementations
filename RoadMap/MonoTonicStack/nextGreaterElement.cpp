#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElemetn(vector<int>& nums1 ){

        int n = nums1.size();

        vector<int> ans(n, -1);

        stack<int> stack;

        for(int i = 0 ; i< nums1.size() ;i++){

          while(!stack.empty() && nums1[i] > nums1[stack.top()]){

            ans[stack.top()] = nums1[i];

            stack.pop();
          }

          stack.push(i);
        }

        return ans;


    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,4,6,8,9};
    vector<int> result = sol.nextGreaterElemetn(nums1);
    for(auto num:result){
        cout << num << endl;
    }
    return 0;
}