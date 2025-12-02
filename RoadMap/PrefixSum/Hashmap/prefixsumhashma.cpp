#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// this current need for the make the sum appear or not
    int countSubArraySum(vector<int>& nums , int k){
        // map for the 
        unordered_map<int , int> map;
        
        // map for the 
        map[0] = 1;

        int prefixSum = 0;
        int count = 0;

        // takuing the element one by one
        for(int num:nums){
            // inmcreasing prefix sum
            prefixSum += num;

            int need = prefixSum -k;

            // if in the map using count++
            if(map.find(need) != map.end() ){
                count += map[need];
            }

            // otherwise increaseing the currene number for th next tiume couytn

            map[prefixSum]++;
        }
        

        return count;



    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    int count = sol.countSubArraySum(nums , 3);
    cout << count << endl;
    return 0;
}
/// jo seekha prefix sum ka use karke
// hamane need value ko find kiya jo sum ke barabar ho sakati thi