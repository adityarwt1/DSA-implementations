#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // ----------------------------------------------------------
        // Step 1: Build a MAX HEAP from all elements
        // (priority_queue by default creates a max heap)
        // ----------------------------------------------------------
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        // Now the heap top contains the LARGEST element

        // DRY RUN EXAMPLE (nums = [3,2,1,5,6,4], k = 2)
        // maxHeap = [6,5,4,3,2,1]   (conceptual)
        // top = 6

        // ----------------------------------------------------------
        // Step 2: Pop the largest element (k-1) times
        // Because after removing (k-1) largest values,
        // the next element on top will be the Kth largest.
        // ----------------------------------------------------------
        for(int i = 1; i < k; i++) {

            // POP #1
            // i = 1, k = 2 → pop 1 time
            // pop 6 → heap becomes [5,4,3,2,1]
            maxHeap.pop();
        }

        // ----------------------------------------------------------
        // Step 3: Now the heap top element is the Kth largest
        // After popping 6, top = 5 (2nd largest)
        // ----------------------------------------------------------
        return maxHeap.top();
    }
};

int main() {
    Solution sol;
    
    return 0;
}