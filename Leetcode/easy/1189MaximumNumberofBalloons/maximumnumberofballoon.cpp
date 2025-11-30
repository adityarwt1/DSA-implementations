#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[26] = {0};

        for(char c:text){

            count[c-'a']++;
        }

        int minBalloon = INT_MAX;


        minBalloon = min(minBalloon,count['b' -'a']);
        minBalloon = min(minBalloon, count['a' - 'a']);
        minBalloon = min(minBalloon,count['l' -'a'] /2);
        minBalloon = min(minBalloon, count['o' - 'a'] /2);
        minBalloon = min(minBalloon, count['n' -'a']);

        return minBalloon;
    }
};

int main() {
    Solution sol;
    string example1 = "loonbalxballpoon";
    string example2 = "nlaebolko";
    int numberOfballoon1 = sol.maxNumberOfBalloons(example1);
    int numberOfballoon2 = sol.maxNumberOfBalloons(example2);
    cout << "number of balloon " << numberOfballoon1<< endl;
    cout << "number of balloon " << numberOfballoon2<< endl;
    return 0;
}