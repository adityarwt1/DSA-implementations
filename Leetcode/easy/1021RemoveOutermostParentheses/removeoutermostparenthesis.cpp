#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {

        string result = "";
        // level of the string
        int level  = 0 ; 

        for(char ch:s){

            if(ch =='('){
                // agar zero se jyada hai to mnuse karana hai
                if(level > 0) result += ch;

                level++;
                
            }
            else if(ch == ')'){

                level--;

                if(level > 0 ) result += ch;
            }
        }

        return result;

    }
};

int main() {
    Solution sol;
    string parenthesis = "(())";
    string result = sol.removeOuterParentheses(parenthesis);
    cout << result << endl;
    return 0;
}