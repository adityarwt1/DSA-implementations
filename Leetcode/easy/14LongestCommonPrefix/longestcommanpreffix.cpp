#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// intution this like colom 
// ["flower","flow","flight"]
// flower
// flow
// flight
     string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    // Use first string as reference
    for (int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];

        // Check if all strings have this character at position i
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0];}
};
int main() {
    Solution sol;
    
    return 0;
}