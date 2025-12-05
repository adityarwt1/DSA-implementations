#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //
        vector<vector<int>> merged;

        /// sortin 
        sort(intervals.begin() , intervals.end());

        // for the comparision pussh in the first timew
        merged.push_back(intervals[0]);

        //start fornm the 
        for(int i =1 ; i < intervals.size() ; i++){
            // compare from the old
            vector<int>& prev = merged.back();
            vector<int>& current = intervals[i];

            // if the start of the current is lessed that end of previous 
            if(current[0] <= prev[1] ){
                // replace itht new max if it is
                prev[1] = max(current[1] , prev[1]);
            }else{
                // otherwise simply push them to the 
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervels  = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> output = sol.merge(intervels);

    return 0;
}