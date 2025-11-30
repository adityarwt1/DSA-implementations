#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
      int result = 0;

      for(int i = 0 ; i < 32 ; i++){
          // making the space 
          result <<= 1;

          /// checking the
          if((n & 1) == 1){ /// checking least significat bit

            result |= 1; //// put bit into the result
          }

          n >>= 1;/// move next bit

      }   

      return result;
    }
};
int main() {
    Solution sol;
    
    return 0;
}