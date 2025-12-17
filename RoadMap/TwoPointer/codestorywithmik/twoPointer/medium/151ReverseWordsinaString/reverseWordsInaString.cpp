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

    void reverseSegement(string &s , int left , int right){
        while(left < right){
            swap(s[left] , s[right]);
            left++;
            right--;
        }

        
    }
    string reverseWords(string s){
       

        // reverse the whole string
        reverse(s.begin() , s.end());
        string result = "";

        int left = 0;
        int right = 0;
        int index = 0;
        int n = s.size();

        while(index < n){
            // while(index < n && s[index] != ' ') left = index;
            if(s[index] != ' ' ){
                left = index;
                while(index < n && s[index +1 ] != ' ' ) right = index;
                reverseSegement(s, left, right) ;
                result += s.substr(left,  right - left +1) + " "; 
            }

            index = right +1;
        }

        return result;
    }
};

int main() {
    Solution sol;
    string sone = " Hellow world";
   return 0;
}