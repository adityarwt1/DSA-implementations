#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfnumber(int n ){

        if(n == 1){
            return 1;
        }
        // base ca
        return n + sumOfnumber(n-1);
    }
};

int main() {
    Solution sol;
    int number = sol.sumOfnumber(10);
    cout << number << endl;
    return 0;
}