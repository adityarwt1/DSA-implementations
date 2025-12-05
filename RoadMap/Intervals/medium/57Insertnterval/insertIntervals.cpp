#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> result;
        int i = 0, n = intervals.size();
        
        // 1. Add intervals completely before newInterval
        while (i < n && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i]);
            i++;
        }
        
        // 2. Merge overlapping intervals with newInterval
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        
        // Add merged interval
        result.push_back(newInterval);
        
        // 3. Add the rest intervals (after newInterval)
        while (i < n) {
            result.push_back(intervals[i]);
            i++;
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervels  = {{1,3},{2,6},{8,10},{15,18}};
    vector<int> newInterval = {3,19};
    
    vector<vector<int>> result = sol.insert(intervels , newInterval);
    return 0;
}