#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        priority_queue<pair<int,int>> maxHeap;
        for (auto &p : freq) {
            maxHeap.push({p.second, p.first});
        }

        vector<int> ans;
        while (k--) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    return 0;
}