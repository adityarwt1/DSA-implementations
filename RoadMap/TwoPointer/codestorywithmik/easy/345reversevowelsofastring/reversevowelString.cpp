#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/// for the comparision take the upper and lower case vowel string
// when the not the vowel make pointer move ahead
/// make sure to now out of bound

    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int left = 0;
        int right = s.length() -1;

        while(left < right){

            /// when the left char not the vowel move pointer ahead
            while(left < right && find(vowels.begin() , vowels.end() , s[left])== vowels.end()) left++;
            while(left < right && find(vowels.begin() , vowels.end() , s[right]) == vowels.end()) right--;

            // if the are both vowels
            if(left < right){
                swap(s[left] , s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};
int main() {
    Solution sol;
    string name = "Aditya";
    string reversedOrder = sol.reverseVowels(name);
    cout << reversedOrder << endl;
    return 0;
}


/// is question se maine yahi seekha 
// i) take the boundary when useing the while loop always unless got stucked
// think the every code imagin the process into the brain so no need to remind the code instead of logic