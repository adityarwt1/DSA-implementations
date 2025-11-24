#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int x ){ // 123
        long long n = x;
        bool isNegative = false;

        // negetive or not?
        if(n< 0){
            isNegative = true;
            n = -n;
        };


        long long reversedNumber = 0;

        while(n !=0 ){
            // last value
            int lastNumber = n % 10;
            // 0 = 0 * 10 + 3 => 3 
            
            /// overflow check
            if(reversedNumber > INT_MAX /10 || reversedNumber < INT_MIN /10 && lastNumber > 7){
                return 0;
            }
            
            reversedNumber = reversedNumber * 10 + lastNumber;
            /// decrease the size of number
            n = n /10;
        }

        // is the negative
        if(isNegative) reversedNumber = -reversedNumber;

        // checking big number for the int
        if(reversedNumber > INT_MAX || reversedNumber < INT_MIN) return 0;
        return (int)reversedNumber;
    }
};

int main() {
    Solution sol;
    int number  = -35;
    int result = sol.reverseNumber(number);
    cout << result << endl;
    return 0;
}