#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /**
     * how to get the number binary number
     * i) take remainder and conct to the string
     * ii) dived the current number by to 
     * iii) reverse the string to get the original binary nmumber
     */
    // helper function to reverse the string
    string decimalToBinary(int n){
        if(n == 0) return "0";

        // store the current remaindcer
        string binary = "";

        while(n >0){
            // remainder
            int remainder =  n % 2;

            // concat the remainder to the end of the string
            binary += to_string(remainder);

            // keep decreaseing the size of the current number like lcm thing in the 5th class
            n = n /2;   
        }


        /// reverse the whol string to the the binary number
        reverse(binary.begin() , binary.end());

        // return reversed number to the end
        return binary;
    }


    /**
     * intution to binary to decimal
     * i) when found te one so plus the number int result string
     */

    int binaryToDecimal(string binary){

        int result = 0 ; 
        int power = 1;

        for(int i = binary.size() -1 ; i >= 0; i--){
            // found the one plus the corrent power into the result
            if(binary[i] == '1'){
                result += power;
            }
            // move the pointer to the next
            power *= 2;
        } 

        return result;
    }

    // operator
    /**
     * i) and operator 
     * pahale jo janata hu vo:- agar dono side ki value true hodi to sab true hai
     * yaha pe isaka kahane ka matlab hai ki 
     * 
     */

     void andOperatorUse(int n , int b ){


        int number = n & b;

        cout << "amdoperator  "<< number << endl;


     }


     void orOperator(){
        int a = 10;
        int b = 6;

        // or operator ke hisab se aga ek bhi true hai to sara true hoga
        int c = a | b;
        cout <<  "or output  "  << c << endl;
     }

     ///xor operetor
     void xorOperator(){
        // example
        vector<int> nums = {4,2,2};

        // cancle itesl meeans remain only the unique when multilple comes out
        int ans = 0;

        for(int i =  0 ;  i < nums.size() ; i++){

            ans ^= nums[i];
        }

        cout <<  "xor output "<<ans << endl;
     }

     void notOperator(){

        int num1 = 5;

        int y = ~num1;

        cout << "notOperator output  " << y << endl;
     }
    
     void rightShift(){

        int number = 20;

        cout << "number 20 righshift " << (number >> 1) << endl;
        cout << "number 20 righshift " << (number >> 2) << endl;
        cout << "number 20 righshift " <<  (number >> 3)<< endl;
        cout << "number 20 righshift " << (number >> 4) << endl;
     }

     void leftShift(){
        int number = 20;

        cout << "number 20 righshift " << (number << 1) << endl;
        cout << "number 20 righshift " << (number << 2) << endl;
        cout << "number 20 righshift " <<  (number << 3)<< endl;
        cout << "number 20 righshift " << (number << 4) << endl;
     }
};

int main() {
    Solution sol;
    int example = 13;
    string binaryNumber = sol.decimalToBinary(example);
    
    cout << "number to binary converted  " << binaryNumber << endl;


    /// convert binary to decimal
    string binaryString = "1101";

    int number = sol.binaryToDecimal(binaryString);


    cout<< "binary to number    " << number << endl;

    // and operaton cout 
    sol.andOperatorUse(13, 10); // 8

    // or operator cout
    sol.orOperator(); // 14


    // xor operator
    sol.xorOperator(); // output is 4

    // not operator output
    sol.notOperator();


    sol.rightShift();
    return 0;
}