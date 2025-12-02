#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// we are taking the same initution of the hashmap where we can 
// modules of current prefix count is the final ans for '

    int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int , int> map;

    // storing the on in the first time
    map[0] = 1;

    int prefixSum =0;
    int count = 0;


    for(int num: nums){

      prefixSum += num;

      /// then check this remiander or not

      int remainder = prefixSum % k;

      if(remainder < 0) remainder += k;

      if(map.find(remainder) != map.end()){
        count += map[remainder];
      }

      map[remainder]++;
    }       

    return count; 

    }
};
int main() {
    Solution sol;
    vector<int> nums  = {4,5,0,-2,-3,1};
    int count = sol.subarraysDivByK(nums , 5);
    cout << count << endl;
    return 0;
}