#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      set<int> hashSet;

      for( int num: nums){
        hashSet.insert(num);
      }

      for(int i = 0 ; i <= nums.size() ; i++){
        if(hashSet.find(i) == hashSet.end()){
          return i;
        }
      }

      return -1;
    }
};
int main() {
    Solution sol;
    
    return 0;
}