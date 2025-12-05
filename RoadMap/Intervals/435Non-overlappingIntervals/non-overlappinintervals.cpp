#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort acccording to the last interval
        sort(intervals.begin() , intervals.end(), [](auto& a , auto&b ){return a[1] < b[1];});

        int count = 0;

        int lastEnd = intervals[0][1];

        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0] <= lastEnd){
                count++;
            }else{
                lastEnd = intervals[i][1];
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    
    return 0;
}