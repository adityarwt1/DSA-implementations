#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNnumber(int n){
        
        // base case 
        if(n == 0 ){
            cout << n << endl;
            return;
        }
        cout << n << endl;

        printNnumber(n-1);
    }
};

int main() {
    Solution sol;
    sol.printNnumber(10);
    return 0;
}