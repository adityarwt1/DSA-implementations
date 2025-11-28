#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0  && ( n & (n-1)) ==0;
    }
};
int main() {
    Solution sol;
    int number = 16;
    bool solution = sol.isPowerOfTwo(number);
    if(solution) cout << "power of two";
    return 0;
}