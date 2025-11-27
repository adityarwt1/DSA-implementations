#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // power if the one it means caluculate   
        if(n == 1) return x;

        // basic mathematics
        if(n == 0) return 0;

        if(n <0) return 1.0 / myPow(x, n-1);

        /// if the even pwero
        if(n %2 ==0){
            return myPow(x * x , n/2);
        }

        return x * myPow(x, n-1);

    }
};
int main() {
    Solution sol;
    double example  = sol.myPow(2, 3);
    cout << example << endl;
    return 0;
}