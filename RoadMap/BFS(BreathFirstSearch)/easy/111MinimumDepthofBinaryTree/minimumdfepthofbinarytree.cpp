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
    int minDepth(TreeNode* root) {
        // edge case when the root not exist
        if(!root) return 0;
        int depth = 1;
        queue<TreeNode*> q;

        q.push(root);
        while(!q.empty()){
            int size =q.size();

            while(size--){
                TreeNode* node =q.front();
                q.pop();

                // checking if this is the end
                if(node->right == nullptr && node->left == nullptr){
                    return depth;
                }

                if(node->left)q.push(node->left);
                if(node->right )q.push(node->right);
            }
            depth++;
        }

        return depth;
    }
};

int main() {
    Solution sol;
    
    return 0;
}