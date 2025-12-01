#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>&nums ,int k ){
        // intution
        // taking the map for checking the this will make the current sum equal to k or not
        // using the current prefix sum -k to get the count of the solution

        unordered_map<int , int> map;
        // already map for the zero
        map[0] = 1;
        // prefixsum 
        int prefix  = 0;

        // count of the subarray
        int count = 0 ;

        for(int num:nums){

            // prefix sum increaseing as well 
            prefix += num;

            // need to for the making the subarray sum equal to k 
            int need = prefix - k;

            //// checking exist or not the result   
            if(map.find(need) != map.end()){
                count += map[need];
            }

            // otherwise hash the current prefix to make the zero

            map[prefix]++;



        }

        return count;

        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1};

    int result = sol.subarraySum(nums, 2);
    cout << result << endl;
    return 0;
}