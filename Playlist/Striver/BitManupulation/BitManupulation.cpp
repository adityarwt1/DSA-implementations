#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Reverse Number
    int reverseNumber(long long n) {
        long long ans = 0;
        while (n != 0) {
            int lastDigit = n % 10;
            ans = ans * 10 + lastDigit;
            n /= 10;
        }
        return ans;
    }

    // Convert Decimal -> Binary
    long long convertToBinary(int n) {
        if (n == 0) return 0;

        long long ans = 0;
        while (n != 0) {
            int bit = n % 2;
            ans = ans * 10 + bit;
            n /= 2;
        }
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

    // One's Complement
    long long onesComplement(long long bin) {
        long long ans = 0;
        long long place = 1;

        while (bin > 0) {
            int bit = bin % 10;
            int flipped = (bit == 0) ? 1 : 0;
            ans = flipped * place + ans;
            place *= 10;
            bin /= 10;
        }
        return ans;
    }

    // Two's Complement
    long long twosComplement(long long bin) {
        long long oneComp = onesComplement(bin);

        // Add 1 manually
        long long ans = 0;
        long long carry = 1;
        long long place = 1;

        while (oneComp > 0 || carry > 0) {
            int bit = oneComp % 10;
            int sum = bit + carry;

            int newBit = sum % 2;
            carry = sum / 2;

            ans = newBit * place + ans;
            place *= 10;
            oneComp /= 10;
        }

        return ans;
    }

    // --------------------- BITWISE OPERATORS ------------------------

    int bitwiseAND(int a, int b) { return a & b; }
    int bitwiseOR(int a, int b) { return a | b; }
    int bitwiseXOR(int a, int b) { return a ^ b; }
    int bitwiseNOT(int a) { return ~a; }

    // --------------------- SHIFT OPERATORS --------------------------

    int leftShift(int a, int x) { return a << x; }
    int rightShift(int a, int x) { return a >> x; }

    // --------------------- BIT MANIPULATION ------------------------

    bool isBitSet(int num, int i) {
        return (num & (1 << i)) != 0;
    }

    int setBit(int num, int i) {
        return num | (1 << i);
    }

    int clearBit(int num, int i) {
        return num & ~(1 << i);
    }

    int toggleBit(int num, int i) {
        return num ^ (1 << i);
    }
};

int main() {
    Solution sol;

    cout << "Decimal to Binary:\n";
    cout << "7 -> " << sol.convertToBinary(7) << endl;
    cout << "13 -> " << sol.convertToBinary(13) << endl;

    cout << "\nBinary to Decimal:\n";
    cout << "1101 -> " << sol.binaryToNumber(1101) << endl;

    cout << "\nOne's Complement:\n";
    cout << "1101 -> " << sol.onesComplement(1101) << endl;

    cout << "\nTwo's Complement:\n";
    cout << "1101 -> " << sol.twosComplement(1101) << endl;

    cout << "\nBitwise Operators:\n";
    cout << "13 & 7 = " << sol.bitwiseAND(13, 7) << endl;
    cout << "13 | 7 = " << sol.bitwiseOR(13, 7) << endl;
    cout << "13 ^ 7 = " << sol.bitwiseXOR(13, 7) << endl;
    cout << "~5 = " << sol.bitwiseNOT(5) << endl;

    cout << "\nShift Operators:\n";
    cout << "13 << 1 = " << sol.leftShift(13, 1) << endl;
    cout << "13 >> 1 = " << sol.rightShift(13, 1) << endl;

    cout << "\nBit Manipulation:\n";
    cout << "Check if bit 2 is set in 13: " << sol.isBitSet(13, 2) << endl;
    cout << "Set bit 1 of 5: " << sol.setBit(5, 1) << endl;
    cout << "Clear bit 0 of 5: " << sol.clearBit(5, 0) << endl;
    cout << "Toggle bit 2 of 5: " << sol.toggleBit(5, 2) << endl;

    return 0;
}
