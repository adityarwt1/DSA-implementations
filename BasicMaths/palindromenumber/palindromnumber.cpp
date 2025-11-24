#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x){
        
        long long n = x;

        long long reversedNumber =0;

        // in the question already given to return teh false for the number
        if(n < 0){
            return false;
        }

        while(n != 0){
            int lastNumber = n % 10;

            // handling the overflow of the number
            if(reversedNumber > (INT_MAX - lastNumber) / 10) return false;

            reversedNumber = reversedNumber * 10 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        // if the extra larger number not be retrun 
        // if(reversedNumber > INT_MAX) return false;
        return reversedNumber == x;
    }
};

int main() {
    Solution sol;
    int number = 121;
    bool isPalindrom = sol.isPalindrome(number);
    string resutl = isPalindrom ? "This is palindrom":"This is not palindrom";
    cout << resutl<< endl;
    return 0;
}