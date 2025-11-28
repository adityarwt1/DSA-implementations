#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long convertToBinary(int n ){

        long long ans = 0;

        while(n!= 0){
            ans = ans * 10 + n % 2;
            n = n /2;
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
    return 0;
}