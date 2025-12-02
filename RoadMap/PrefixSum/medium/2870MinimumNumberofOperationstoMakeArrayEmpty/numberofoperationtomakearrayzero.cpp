#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int , int> freq;

        for(int n:nums) freq[n]++;

        int operations = 0;

        for(auto &p:freq){
              int f = p.second;

              // calculation the operation to remove
          if(f ==1) return -1; // ele ek hoga to operaton nahi mana jayega kyu ki hame ek hi bar me aisa operaton karana hai ki sara empty ban jaye

          if(f % 3 ==0){
            operations += f/3;
          }else if(f %3 ==1){
            operations += (f-4)/3+2;
          }else{ /// f% 3== 2
            operations += f /3+1;
          }
        }

        return operations;

    }
};
int main() {
    Solution sol;
    
    return 0;
}