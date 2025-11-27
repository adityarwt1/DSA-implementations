#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long power(int x, int n){
        // if the power is one
        if(n == 1)return x;

        /// for the nedgative power
        if(n <0) return 1.0 / power(x, -n); // -n for the keeping value in the favour of square


        // even power
        if(n & 2 == 0){
            // class simple
            long long half  = power(x, n/2);
            return half * half;
        }

            return x* power(x, n-1);


    }

    double myPow(double x, int n){
        double ans = 1.0;
        long long  nn = n;


        /// for handle the negatinve number
        if(nn < 0) nn = -1 * nn;

        // untim the power
        while(nn){
            // for the odd number
            if(nn%2){
                // 
            ans = ans * x;
            nn = nn -1;
            }else{ // positer long long
                x = x * x;
                nn = nn /2;
            }

        }

        if(n< 0) ans= (double)(1.0) / (double)(ans);
        return ans;
    }
};

int main() {
    Solution sol;
    long long  result = sol.power(2 , 3);
    cout << result << endl;
    return 0;
}