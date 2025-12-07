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
// finding the commnia splitter on the subtrees
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        /// base case of the recurection
        if(!root) return nullptr;

        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right, p,q);
        }

        return root;
    }
};
int main() {
    Solution sol;
    
    return 0;
}