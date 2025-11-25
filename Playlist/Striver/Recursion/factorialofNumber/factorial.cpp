
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorialOfNumber(int n){

    // base case
    if(n ==1){
        return 1;
    }

    return n * factorialOfNumber(n-1);
    }
};

int main() {
    Solution sol;
    int fiveFactorial  = sol.factorialOfNumber(5);
    int twoFactorial = sol.factorialOfNumber(2);
    cout << fiveFactorial << endl;
    cout << twoFactorial << endl;
    return 0;
}