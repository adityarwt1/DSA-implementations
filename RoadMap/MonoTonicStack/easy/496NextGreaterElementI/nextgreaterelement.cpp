#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     int n = nums1.size();
     
     vector<int> ans(n, -1);

     stack<int> stack;

     for(int i   = 0 ; i < n ; i++){


        // if the last element greate thant return the value4
        while(!stack.empty() && nums1[i] > nums1[stack.top()]){
            ans[stack.top()] = nums1[i];
            stack.pop();
        }

        // otherwise push the current index to it

        stack.push(i);
        
     }

     return ans;
     
    }


};
int main() {
    Solution sol;
    
    return 0;
}