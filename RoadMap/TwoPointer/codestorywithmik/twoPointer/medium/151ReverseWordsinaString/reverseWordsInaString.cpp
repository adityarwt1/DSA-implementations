#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWordsOwn(string s) {
        string result = "";    

        // i thinking to make the strin write from the only from the left then one by one push into the result
        int left = 0 ; 
        int right = s.length();
        // shifting from the left spaces

        while(left < right && s[right] == ' ' )right--;
        bool firstWord = false;
        while(left < right){

            if(!firstWord){
                if(s[left] != ' '){
                    firstWord = true;
                }else{
                    left++;
                }
            }else{

           
            while(left < right  && s[right -1 ] == ' ') right--;

            result += s[right];
            

            }

            // pointer moves
            left++;
            right--;
        }

        return result;
    }

    string reverseString(string s){
        /*
        i) questoin says 
        in the last in the middle and the the bigin have the spaces need to remove the spaces ffom the workd
        ii) 
        */
    }
};

int main() {
    Solution sol;
    string sone = " Hellow world";
   return 0;
}