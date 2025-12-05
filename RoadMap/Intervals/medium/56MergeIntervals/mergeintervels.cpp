#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;

        sort(intervals.begin() , intervals.end());

        merged.push_back(intervals[0]);

        for(int i =1 ; i < intervals.size() ; i++){

            vector<int>& prev = merged.back();
            vector<int>& current = intervals[i];


            if(current[0] <= prev[1] ){
                prev[1] = max(current[1] , prev[1]);
            }else{
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