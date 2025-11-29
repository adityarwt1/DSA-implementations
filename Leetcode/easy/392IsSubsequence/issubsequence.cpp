#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;

        for(int i = 0 ; i < t.length() ; i++){

          // fi we are found the all

          if(index ==   s.length()){
            return true;
          }

            // finding the fix elemet
            if(s[index] == t[i]){
                // for the stoping the out of bound
                if(index <= s.length()){
                index++;
                }
            }
        }

        // if found the all element properly
        if(index ==  s.length()  ){
            return true;
        }else{
            return false;
        }
    }
};


int main() {
    Solution sol;
    string s = "abc";
    string t = "asdfgsdbasdasdrfgc";
    bool result = sol.isSubsequence(s, t);
    if(result ) cout << "this is working fine"<< endl;
    return 0;
}