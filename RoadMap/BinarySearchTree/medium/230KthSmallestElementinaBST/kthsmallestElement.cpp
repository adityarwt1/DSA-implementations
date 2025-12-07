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

/**
 * as we know for the lowest value in the binary search tree nnedd to trvafedl in the left side for the lowees value
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>st;


        while(true){
            // push whole value from teh left
            while(root){
                st.push(root);
                root  = root->left;
            }

            // time to get the value one by one in the 
            root = st.top();
            st.pop();
            //checking the value one by one

            if(--k == 0) return root->val;

            // continue the value from the  right becuase now everything is reveresed
            root = root->right;
        }
    }
};

int main() {
    Solution sol;
    
    return 0;
}

/// for the smallest one need to go left for the smallest one value
/// to neeche karana hoga ho search to pahel to push kar deta hai stack, me phir oopar se k minus karate karte return kar denge
