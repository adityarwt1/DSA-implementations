#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    int findGCD(int num1, int num2){
        // in the number is largesdt from the second number
        // 5 < 15

        if(num2 ==0){
            return num1;
        }

        return findGCD(num2 , num1 %  num2);
    }


};

int main() {
    Solution sol;
    int result = sol.findGCD(20 , 15);
    cout << result  << endl;
    return 0;
}