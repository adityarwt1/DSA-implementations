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
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            bool foundX = false, foundY = false;
            TreeNode* parentX = nullptr;
            TreeNode* parentY = nullptr;

            while (size--) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left) {
                    if (node->left->val == x) {
                        foundX = true;
                        parentX = node;
                    }
                    if (node->left->val == y) {
                        foundY = true;
                        parentY = node;
                    }
                    q.push(node->left);
                }

                if (node->right) {
                    if (node->right->val == x) {
                        foundX = true;
                        parentX = node;
                    }
                    if (node->right->val == y) {
                        foundY = true;
                        parentY = node;
                    }
                    q.push(node->right);
                }
            }

            // After finishing one level:

            if (foundX && foundY) {
                return parentX != parentY; // same level, but different parent
            }

            if (foundX || foundY) return false; // only one found this level
        }

        return false;
    }
};
