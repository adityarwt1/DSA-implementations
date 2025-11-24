#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n ){ // 123
        int reversedNumber = 0;

        while(n !=0 ){
            // last value
            int lastNumber = n % 10;
            // 0 = 0 * 10 + 3 => 3 
            reversedNumber = reversedNumber * 10 + lastNumber;
            /// decrease the size of number
            n = n /10;
        }

        return reversedNumber;
    }
};

int main() {
    Solution sol;
    int number  = 35;
    int result = sol.reverseNumber(number);
    cout << result << endl;
    return 0;
}