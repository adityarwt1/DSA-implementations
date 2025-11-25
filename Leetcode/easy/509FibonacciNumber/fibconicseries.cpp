#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fibonachi(int n){
        if(n<= 1){
            return n;
        }

        return fibonachi(n-1) + fibonachi(n-2);
    }
};

int main() {
    Solution sol;
    int number = sol.fibonachi(2);
    int numberThree = sol.fibonachi(3);
    cout << numberThree << endl;
    cout << number << endl;
    return 0;
}