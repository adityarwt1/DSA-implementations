#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     // Recursive reverse
//     string reverseString(string s){
//         if(s.length() == 0)
//             return "";

//         return reverseString(s.substr(1)) + s[0];
//     }

//     bool isPalindrome(string s) {
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         // Remove non-alphabet characters
//         s.erase(remove_if(s.begin(), s.end(),
//                           [](char c){ return !islower(c) ; }),
//                 s.end());

//         // Convert to lowercase

//         return s == reverseString(s);
//     }
// };
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // remove non-alphanumeric
        s.erase(remove_if(s.begin(), s.end(),
                          [](char c){ return !isalnum(c); }),
                s.end());

        // convert to lowercase
        for (char &c : s) c = tolower(c);

        // check palindrome
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
int main() {
    Solution sol;
    string eye  = "eye";
    bool isPlindrom = sol.isPalindrome(eye);
    bool isPalindrome = sol.isPalindrome("A man, a plan, a canal: Panama");
    cout << isPalindrome << endl;
    cout << isPlindrom ? "This is palindrom ": (string)"not plindrome";

    return 0;
}