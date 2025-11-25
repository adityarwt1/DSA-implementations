#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x< 0){
            return false;
        }
        long long n = x;
        long long reversedNumber = 0;

        while(n != 0){

            int lastNumber = n % 10;

            // checking the over flow
            if(reversedNumber > (INT_MAX - lastNumber) /10){
                return false;
            }

            reversedNumber = reversedNumber * 10 + lastNumber;

            n  = n /10;
        }

        return reversedNumber == x;
    }
};

int main() {
    Solution sol;
    
    return 0;
}