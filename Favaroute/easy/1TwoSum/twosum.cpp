#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>hashMap;

        for(int i = 0 ; i < nums.size() ; i++){
          int compliment = target - nums[i];
          if(hashMap.find(compliment) != hashMap.end()){
            return {hashMap[compliment] , i};
          }
          else{
            hashMap[nums[i]] = i;
          }
        }

        return {};
    }
};
int main() {
    Solution sol;
    
    return 0;
}