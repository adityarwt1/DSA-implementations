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
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(!root) return false;
        // agar jo dono na hoto kaise kairanahai
       if(!root->left && !root->right ){
        return root->val == targetSum;
       }

       return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};

int main() {
    Solution sol;
    
    return 0;
}

// there is make the easy for the eveeryt thing substract from the targetSum make the everth9ing easier