#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// my brute force solution 
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;  // should start from 0, not INT_MIN

        for (int i = 0; i < s.length(); i++) {
            unordered_set<char> st;
            int length = 0;

            for (int j = i; j < s.length(); j++) {
                if (st.find(s[j]) != st.end()) {
                    break;  // duplicate found, stop extending this substring
                }
                st.insert(s[j]);
                length++;
            }

            maxLength = max(maxLength, length);
        }

        return maxLength;
    }

    // optimal solution for this
    /**
     * intution 
     * i) storing index in the char format
     * ii) a left index where storign the starting point
     * ii) maxLength comparing every time found the 
     * 
     * if charcter scen before shrink the window moviing left to right
     * upadting last scene
     * maxlength comparision
     *  */    
    int optimalSolution(string s){
        vector<int> lastIndex(256 , -1); // store of scene or u

        int left = 0 ; 
        int maxLength = 0;

        // interate from the start 
        for(int right = 0 ;right < s.length() ; right++){
            char c = s[right];


            if(lastIndex[c] >= left){
                left = lastIndex[c]+1;// for this already upadte in the c starting of teh loop
            }

            // updatin the scene
            lastIndex[c] = right;

            maxLength  = max(maxLength, right -left +1);


        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    
    return 0;
}