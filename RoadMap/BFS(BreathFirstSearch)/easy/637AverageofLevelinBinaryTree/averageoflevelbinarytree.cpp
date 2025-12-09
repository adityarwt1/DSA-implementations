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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        vector<double> result;

        queue<TreeNode*> q;

        q.push(root);

        // loop until the q is not emplty
        while(!q.empty()){
            int size = q.size();
            int sizeSafe = size;
            long long sum = 0;
            while(size--){
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if(node->left)q.push(node->left);
                if(node->right) q.push(node->right);
            }
            result.push_back((double) sum/sizeSafe);
        }

        return result;
    }
};

int main() {
    Solution sol;
    
    return 0;
}