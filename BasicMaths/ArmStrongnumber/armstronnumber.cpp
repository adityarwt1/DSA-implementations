#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(long long n){
        int count = 0;
        while(n != 0){
            count++;
            n /= 10;
        }
        return count;
    }

    bool armStrongNumber(int x){
        // long long n = x;
        // long long sum = 0;

        // int digit = countDigit(n);

        // while(n != 0){
        //     int lastNumber = n % 10;
        //     sum += (long long)pow(lastNumber, digit);
        //     n /= 10;
        // }

        // return sum == x;

        int k = to_string(x).length();
        long long sum = 0 ;

        while(x != 0){

            int lastNumber = x % 10;

            sum += pow(lastNumber , k);

            x = x /10;
        }

        return sum == x;
    }
};

int main() {
    Solution sol;
    int number = 153;
    bool result = sol.armStrongNumber(number);
    if(result) cout << "Armstrong number\n";
    else cout << "Not Armstrong number\n";

    return 0;
}
