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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // for the return the asnwer basic of it
        vector<vector<int>> result;

        // recursive approach for this
        /// base cas of the recursoin
        if(!root) return result;


        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            vector<int> level;

            while(size--){
                TreeNode* node = q.front();

                q.pop();

                level.push_back(node->val); // this is only for the each level
                // these are the nexty value
                if(node->left ) q.push(node->left); // these are dicideing the size of the que
                if(node->right) q.push(node->right); // these ar diciding the the size fo the zue
            }

            result.push_back(level);
        }

        return result;
    }

    vector<vector<int>> myEffort(TreeNode* root){

        vector<vector<int>> result;

        queue<TreeNode*> q;

        q.push(root);

        /// until the ques is full
        while(!q.empty()){
            int size = q.size();

            vector<int> level;

            while(size--){
                TreeNode* node = q.front();
                // remove the value from the que to push the next bnode have the 
                q.pop();

                level.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            result.push_back(level);
            
        }
        return result;
        

    }
};

int main() {
    Solution sol;
    
    return 0;
}
//// thinding develope
// fopr the levelk 
// this the level stawrtin the n porform the level 