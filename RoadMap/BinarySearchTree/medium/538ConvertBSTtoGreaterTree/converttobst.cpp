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
    // convert to greater eleemnt in the 
    int sum  = 0;
    
    TreeNode* convertBST(TreeNode* root) {
        // base case of the root
        if(!root) return nullptr;

        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);

        return root;
    }
};

int main() {
    Solution sol;
    
    return 0;
}