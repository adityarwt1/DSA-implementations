#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;


        for(char ch:s){

            if(ch == ')'){
                if(!stack.top() != ch){
                    return false;
                }else
                    stack.pop();
            }else if(ch == '}'){
                if(!stack.top() !=  ch){
                    return false;
                }else{
                    stack.pop();
                }
            }else if(ch == ']'){
                if(!stack.top() != ch){
                    return false;
                }else{
                    stack.pop();
                }
            }else{
                stack.push(ch);
            }

        }
        return stack.empty();
    }
};

int main() {
    Solution sol;
    string example = "(())";
    bool result1 = sol.isValid(example);
    if(result1) cout << "Working fine your algorithum"<< endl;

    string example2= "(]";

    bool result2  = sol.isValid(example2);

    if(!result2) cout << "working algo"<< endl;

    return 0;
}