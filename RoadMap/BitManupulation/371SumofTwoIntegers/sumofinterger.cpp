#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        
        while(b != 0){

          int sum = a ^ b;
          int carry = (a & b) << 1; // shifting to the left

          a = sum;
          b  = carry;
        }

        return a;
    }
};
int main() {
    Solution sol;
    int a = 3 , b = 5;
    int result = sol.getSum(a, b);
    cout << result << endl;
    return 0;
}