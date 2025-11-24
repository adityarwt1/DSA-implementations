#include <bits/stdc++.h>
using namespace std;
// initution i get when we devide by 10 
// we storing the int value so that we not get the floting numbers
class Solution {
public:
    int countDigit(int n){
        // handle the cases
        if(n == 0 )return 1;

        // handle the positive integer
        if(n<0) return countDigit(-n);
        int count = 0;

        while(n!=0){
            count++;
            n = n /10;
        }

        return count;
    }
};  

int main() {
    Solution sol;
    
    int number = -5100;
    int digicount = sol.countDigit(number);
    cout<< digicount << endl;
    return 0;
}