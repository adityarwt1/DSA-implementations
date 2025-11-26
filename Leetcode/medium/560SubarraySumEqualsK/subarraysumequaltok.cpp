#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySumBruteforce(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            for(int j = i ; j < nums.size() ; j++){
                sum += nums[j];

                if(sum == k ){
                  count++;
                }
            }
        }

        return count;
    } 
    
    int optimalAproach(vector<int>& nums , int k ){
  int n = nums.size();
    vector<int> prefix(n);

    prefix[0] = nums[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + nums[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            int sum;

            if(i == 0){
                sum = prefix[j];
            }
            else{
                sum = prefix[j] - prefix[i - 1];
            }

            if(sum == k){
                count++;
            }
        }
    }

    return count;
}
    
    
};
int main() {
    Solution sol;
    vector<int> nums= {1,1,1};
    int result = sol.subarraySumBruteforce(nums, 2);
    cout << result << endl;

    vector<int> nums2 = {1,2,1,2,1};
    int resul2 = sol.subarraySumBruteforce(nums2 , 3);
    cout << resul2 << endl;

    // testcase threee 
    vector<int> nums3 = {1,-1,0};
    int result3 = sol.subarraySumBruteforce(nums3 , 0);
    cout << result3 << endl;

    int optimal1 = sol.optimalAproach(nums , 2);
    cout << optimal1 << endl;
    return 0;
}