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
     vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;

        queue<TreeNode*> q;

        // starting fromthe the begin first node 
        q.push(root);
        // jabtak kkhali nahi trAVELL KARATE RAHO
        while(q.empty()){
            // size fothe current node
            int size = q.size(); // size fo tehh curren node
            // levevl me kitane eleehai hai unaka record rakhane ke liye
            vector<int> level;

            // jitane abhi nodde me exist honge vo sab
            while(size--){
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left) q.push(node->left); // the are the incresing te sizeactully
                if(node->right)q.push(node->right);
            }
            result.push_back(level);
        }

        // reverse order bec uase need to travel from the botton
        reverse(result.begin() , result.end());
        return result;

     }
};

int main() {
    Solution sol;
    
    return 0;
}