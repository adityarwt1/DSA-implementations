#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseSegment(string &s ,int left , int right){
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    string reverseString(string s){
        int n = s.size();
        int left = 0;

        // yaha se cheej seekhe ki jab sync hoke chalna hhi hai to kyu ek hi variable lele
        while(left < n){
            int right = left;

            while(right < n && s[right] != ' ') right++;

            reverseSegment(s, left, right);

            left = right+ 1;
        }

        return s;
    } 
};

int main() {
    Solution sol;
    string testString = "Let's take LeetCode contest";
    string resultString  = sol.reverseString(testString);
    cout << testString<< endl;

    return 0;
}

// isase seekha ki symantiniously use krana hoto kaise karana hai
