#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // first try
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0) return -1;
        long long n = 1;

        while(true){
          if(n % k == 0){
            return to_string( n).length();
          }
          else{

            if(n > INT_MAX ){
              return  to_string(n).length();
            }
            n = n * 10 + 1;
          }
        }
    };

    int samllestRepunitDiByk2(int k){
        //initueion 
        /// lenth is lenie
        // remdergives same module reminder 
        // greatere than one asigh as s
        // range between the 0 k -1
        // mathematics = remider give same whe n increse linear
        if(k == 1) return 1;
        int length = 0;
        int n = 1;

        while(length != k-1){
            int reminder = n % k;
            if(reminder == 0){
                return length;
            }
            else if(reminder > 1){
                n = reminder;
            }else{
                n = n * 10 +1;
            }
            length++;
        }

        return -1;
    }

    int smallestDivisiblebyK3(int k){

        /// if the value are 
        if(k % 2 == 0 || k % 5 == 0) return -1;

        int remainder = 0;

        for(int lenght = 1 ; lenght <= k ; lenght++){
            remainder = (remainder * 10 + 1) % k;

            if(remainder == 0){
                return lenght;
            }

        }
        return -1;
    }

};
int main() {
    Solution sol;
    int result = sol.smallestRepunitDivByK(1);
    int result2 = sol.samllestRepunitDiByk2(1);
    int result3  = sol.smallestDivisiblebyK3(1);
    cout << "Result 1" << result << endl;
    cout << "Result 2" << result2 << endl;
    cout << "result3"<< " " <<  result3 << endl;
    return 0;
}