#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int reverseNumber(int n ){
        int ans = 0;

        while(n != 0){
            int lastNumber = n % 10;

            ans = ans *10 + lastNumber;

            n = n /10;
        }

        return ans;
    }
    long long convertToBinary(int n ){

        long long ans = 0;

        while(n!= 0){
            // binary is basically moodules of 
            ans = ans * 10 + n % 2;
            n = n /2;
        }

        return ans;
    }

    int binaryToNumber(int x){
        int n = reverseNumber(x);
        int ans =0 ;
        int index = 0;
        while(n != 0){
            int lastNumber = n % 10 ;

            ans += pow(lastNumber , index);

            index++;

            /// n to 0
            n = n /10;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    int number  = 7;
    long long result = sol.convertToBinary(number);
    cout << result << endl;
    int number2  = 13;
    long long result2  = sol.convertToBinary(number2);
    cout << result2 << endl;
    // binary to number
    int example1 = 1011;
    int numberConverted = sol.binaryToNumber(example1);
    cout << numberConverted << endl;
    return 0;
}