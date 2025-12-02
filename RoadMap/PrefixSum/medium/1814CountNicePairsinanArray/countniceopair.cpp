#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long reverseNumber(long long x){

      long long reverse = 0;

      while(x>0){

        reverse = reverse * 10+ (x % 10);

        x  =x /10;
      }

      return reverse;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long , long > map;
      // mod rakhenge sstro karane ke liye value without overflow
        long long mod = 1e9 +7;
        // count the possiblities
        int count = 0;

        for(int num: nums){

          long long difrence = num  - reverseNumber(num);


          if(map.find(difrence) != map.end()){

            count = (count + map[difrence]) % mod;
          }

          map[difrence]++;
        }

        return count % mod;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {13,10,35,24,76};
    long long result = sol.countNicePairs(nums);

    cout << result << endl; // 4
    return 0;
}