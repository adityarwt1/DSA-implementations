#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// i) convert ot binary string/
// ii) run the for loop for count the how many time number appear

    string decimanToBinary(int n){

        string result = "";

        while(n > 0 ){
            int remainder  = n % 2;
            result += to_string(remainder);

            // decreatin the size
            n = n /2;
        }

        return result;
    }
    int hammingWeight(int n) {
        string binary = decimanToBinary(n);

        int count   = 0 ; 


        for(int i = 0 ; i <binary.length() ; i++){

            if(binary[i] == '1'){

                count++;
            }
        }

        return (int) count;
    }
};
int main() {
    Solution sol;
    int example = 11;
    int coutOfNum = sol.hammingWeight(example);

    cout << coutOfNum << endl;
    return 0;
}