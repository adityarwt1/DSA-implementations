#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> result;
        if (nums1.empty() || nums2.empty() || k == 0) return result;

        // minHeap stores {sum, i, j}
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

        // Step 1: Push initial pairs (nums1[i], nums2[0])
        for(int i = 0; i < nums1.size() && i < k; i++) {
            minHeap.push({nums1[i] + nums2[0], i, 0});
        }

        // Step 2: Extract k smallest pairs
        while(k-- && !minHeap.empty()) {
            auto top = minHeap.top();
            minHeap.pop();

            int sum = top[0];
            int i = top[1];
            int j = top[2];

            result.push_back({nums1[i], nums2[j]});

            // Move to next pair nums1[i] + nums2[j+1]
            if (j + 1 < nums2.size()) {
                minHeap.push({nums1[i] + nums2[j+1], i, j+1});
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,7,11};
    vector<int> nums2 = {2,4,6};
    int k = 3;
    vector<vector<int>> output = sol.kSmallestPairs(nums1, nums2 , k);

    for(auto &first:output){
        for(auto &second:first){
            cout << second <<endl;
        }
    }
    return 0;
}