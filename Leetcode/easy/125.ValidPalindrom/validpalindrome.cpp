#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        /// like the we are know the word called madam is a palindrom 

        int left = 0;
        int right = s.length() -1;

        while(left< right){

            /// if the numnber
            if(!isalnum(s[left])){
                left++;
                continue;
            }


            if(!isalnum(s[right])){
                right--;
                continue;

            }


            /// agar ye match hi nahi karata hai to 
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }


        }

        return true;
    }
};

int main() {
    Solution sol;
    
    return 0;
}