#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeInatervels(vector<vector<int>>& intervals ){
        vector<vector<int>> merged; 

        /// sot to the get the in the order to mege efficiently
        sort(intervals.begin() , intervals.end());

        // insert in the firft on the base of the interval

        merged.push_back(intervals[0]);

        // we used to 0 index so we need to start frfom the loooking from the index one
        for(int i = 1; i < intervals.size() ; i++){
            vector<int>& prev = merged.back();
            vector<int>& current = intervals[i];

            // agar pahala pointer sorted hoga to 
            if(current[0] <= prev[1]){
                prev[1] = max(prev[1] , current[1]);
            }else{
                merged.push_back(current);
            }
        }

        return merged;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> interverls = {{}};   
    return 0;
}