#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0 ; 
            for(int j = i ; j <= nums.size() ; j++){
                sum += nums[j];

                if(sum == k ){
                  count++;
                  break;
                }
            }
        }

        return count;
    }   
};
int main() {
    Solution sol;
    vector<int> nums= {1,1,1};
    int result = sol.subarraySum(nums, 2);
    cout << result << endl;

    vector<int> nums2 = {1,2,1,2,1};
    int resul2 = sol.subarraySum(nums2 , 3);
    cout << resul2 << endl;

    // testcase threee 
    vector<int> nums3 = {1,-1,0};
    int result3 = sol.subarraySum(nums3 , 0);
    cout << result3 << endl;
    return 0;
}