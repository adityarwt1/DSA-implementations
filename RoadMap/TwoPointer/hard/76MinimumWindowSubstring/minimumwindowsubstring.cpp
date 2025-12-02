#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size()) return "";

        unordered_map<char, int> need;
        for(char c : t) need[c]++;

        unordered_map<char, int> window;

        int have = 0;
        int needCount = need.size();

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            if(need.count(c) && window[c] == need[c])
                have++;

            // shrink window when valid
            while(have == needCount) {

                // update minimum window
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // pop from left side
                char d = s[left];
                window[d]--;

                if(need.count(d) && window[d] < need[d])
                    have--;

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};


int main() {
    Solution sol;
    string s = "ADOBECODEBANC";
    string  t = "ABC";
    string output = sol.minWindow(s, t);
    cout << output << endl;
    return 0;
}