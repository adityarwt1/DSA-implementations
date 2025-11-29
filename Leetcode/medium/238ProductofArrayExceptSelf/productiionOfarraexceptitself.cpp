#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calCulateProduct(vector<int>& nums , int index){
        int product = 1;

        for(int i  = 0 ; i < nums.size() ; i++){

            if(i == index){
                continue;
            }else{
                product *= nums[i];
            }
        }

        return product;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n) ;

        for(int i = 0 ; i < n ; i++){
            result.push_back(calCulateProduct(nums, i));
        }

        return result;
    }

    // optinmal solution
    // right ka math kaise
    vector<int> productExceptSelf(vector<int>& nums) {
        // nums size
        int n = nums.size();
        
        // result 
        vector<int> ans(n);


        // product of left element
        // left me 1 rakah jisase age ka calculation easy ho jayue
        ans[0] = 1;

        for(int i = 1 ; i < n; i++){
            ans[i] = ans[i - 1] * nums[i -1];
        }


        /// for the right sided sum

        int right = 1;

        for(int i = n -1 ; i >= 0 ; i--){
            ans[i] *= right;
            right *= nums[i];
        }


        return ans;
    }

    
};


class LeetCode {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // size of the arra
        int n = nums.size();

        //output array
        vector<int> output(n);

        //// left half calculation 
        output[0] = 1;

        for(int i =1 ; i  < n ; i++){
          output[i] = output[i -1 ] * nums[i-1];
        }


        int right = 1;

        for(int i  = n -1 ; i >= 0 ; i--){
          // joapahel se hai vo add hi ho 
          output[i] *= right;
          // lekin nums currrent bhi to product ho jaye
          right *= nums[i];
        }

        return output;


    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4};
    vector<int> ans = sol.productExceptSelf(nums);
    
    for(int num : ans){
        cout << num<< endl;
    }

    return 0;
}