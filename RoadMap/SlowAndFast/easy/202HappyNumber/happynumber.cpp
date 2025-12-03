#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getNext(int n){
        int sum = 0;

        while(n >0){

            int remainder = n % 10;
            sum += remainder * remainder;

            n/= 10;
        }

        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while(slow != fast && fast != 1){

            slow = getNext(slow);
            fast = getNext(getNext(slow));
        }

        return fast == 1;
    }
};
int main() {
    Solution sol;
    int number = 19;
    bool answer = sol.isHappy(number);
    return 0;
}