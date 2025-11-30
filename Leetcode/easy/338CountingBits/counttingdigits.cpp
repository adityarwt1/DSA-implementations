#include <bits/stdc++.h>
using namespace std;

class Solution {
    /**
     * make the binary 
     * count the number of one and give it
     * 
     */
public:

    string decimatToBinary(int n ){
        // 
        string result ="";

        while(n > 0){
            int remainder = n %2;

            result += to_string(remainder);

            n = n /2;
        }

        reverse(result.begin() , result.end());

        return result;
        
    }

    int countOne(int n ){
        // string to binary
        string  binary = decimatToBinary(n) ;

        int count = 0;

        for(int i = 0 ; i < binary.length() ; i++){

            if(binary[i] == '1'){
                count++;
            }
        }

        return count;


    }
    vector<int> countBits(int n) {
       vector<int> res(n +1 , 0); 


       for(int i = 0 ; i <n +1 ; i++){

        res[i] = countOne(i);
       }

       return res;
    }
};

int main() {
    Solution sol;

    // testcase one
    int n = 2;
    vector<int> result = sol.countBits(n);
    for(int num: result){
        cout << num << endl;
    }

    // testcase 2
    int n3 = 5;
    vector<int> result2 = sol.countBits(n3);
    for(int num: result2){
        cout << num << endl;
    }
    return 0;
}