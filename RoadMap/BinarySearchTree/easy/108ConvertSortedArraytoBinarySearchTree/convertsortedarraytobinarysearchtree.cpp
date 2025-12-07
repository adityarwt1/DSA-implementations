#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* build(vector<int>&nums, int l, int r){

        // base case fo the recursoni
        if(l> r) return nullptr;

        int mid = (l +r ) /2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = build(nums, l, mid -1);
        root->right = build(nums, mid +1, r);

        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0 , nums.size() -1);
    }
};
int main() {
    Solution sol;
    
    return 0;
}