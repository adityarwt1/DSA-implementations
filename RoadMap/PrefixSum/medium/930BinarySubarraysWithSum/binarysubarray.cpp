#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int , int > map;
        // fix the startin value with the sum
        map[0] = 1;
        // binasry subarray
        int prefixSum = 0 ;
        int count = 0;

        for(int num : nums){

            prefixSum += num;


            // needed value
            int need  = prefixSum - goal;

            if(map.find(need) !=  map.end()){

                count += map[need];
            }


            map[prefixSum]++;
        }

        return count;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,0,1,0,1};
    int result = sol.numSubarraysWithSum(nums , 2);
    vector<int> nums2 = {0,0,0,0,0};
    int result2 = sol.numSubarraysWithSum(nums2 , 0);

    cout << result << endl; // 4
    cout << result2 << endl; // 15
    return 0;
}