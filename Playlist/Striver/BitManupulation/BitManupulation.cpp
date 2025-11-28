#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Reverse Number
    int reverseNumber(int n) {
        int ans = 0;
        while (n != 0) {
            int lastDigit = n % 10;
            ans = ans * 10 + lastDigit;
            n /= 10;
        }
        return ans;
    }

    // Convert Decimal -> Binary
    long long convertToBinary(int n) {
        long long ans = 0;

        while (n != 0) {
            int bit = n % 2;
            ans = ans * 10 + bit;
            n /= 2;
        }

        // Reverse because we pushed bits backward
        return reverseNumber(ans);
    }

    // Convert Binary -> Decimal
    int binaryToNumber(long long x) {
        int ans = 0, index = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            ans += lastDigit * pow(2, index);

            index++;
            x /= 10;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    int number = 7;
    cout << sol.convertToBinary(number) << endl;

    int number2 = 13;
    cout << sol.convertToBinary(number2) << endl;

    // binary to number
    long long example1 = 1101;
    cout << sol.binaryToNumber(example1) << endl;

    return 0;
}
