#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int count = 0;
      for(int num : nums){

        /// checking exist or not
        if(map.find(num) != map.end()){

          count += map[num];

          map[num] += 1;
        }else{
          map[num] += 1;
        }


      }

      return count;
    }
};
// Jab bhi koi number dobara milta hai, woh apne pehle wale saare occurrences ke saath new pairs banata hai. Isliye har baar `count += freq[num]` karke total good pairs badhte jaate hain.

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,1,1,3};

    int ans = sol.numIdenticalPairs(nums); 

    cout << ans << endl;// 4
    return 0;
}