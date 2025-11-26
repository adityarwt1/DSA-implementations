#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the order of words 
    string reverseWords(string s) {
        // Result string to store final output
        string result = "";
        
        // Pointer starting from the last character
        int i = s.size() - 1;
        
        // Traverse string from right to left
        while (i >= 0) {
            // Skip spaces at the current position
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            
            // If pointer is out of bounds, break
            if (i < 0) break;
            
            // Mark the end of the current word
            int end = i;
            
            // Move left until a space or start of string is found
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            
            // Extract the current word
            string word = s.substr(i + 1, end - i);
            
            // Add space before appending next word if result is not empty
            if (!result.empty()) {
                result += " ";
            }
            
            // Append the word to the result
            result += word;
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    string exampleString =  " amazing coding skills ";
    string result = sol.reverseWords(exampleString);
    cout << result << endl;
    return 0;
}