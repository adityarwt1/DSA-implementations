#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> lastScene;
        int left = 0;
        int maxLength = 0;

        for(int right = 0; right < s.size(); right++) {

            char c = s[right];

            // Check if character exists + inside window
            if(lastScene.find(c) != lastScene.end() && lastScene[c] >= left) {
                left = lastScene[c] + 1;
            }

            // store last seen index
            lastScene[c] = right;

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    int maxLengthWithoutReapeatingCharacter = sol.lengthOfLongestSubstring(s);
    cout << maxLengthWithoutReapeatingCharacter << endl;
    return 0;
}