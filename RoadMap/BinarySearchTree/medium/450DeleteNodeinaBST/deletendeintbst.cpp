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
    TreeNode* deleteNode(TreeNode* root, int key){

        if(!root) return nullptr;

        /// if the smaller travel in thbe left
        if(key < root->val) root->left=  deleteNode(root->left , key);

        else if(key > root->val) root->right=  deleteNode(root->right, key);
        else {  // if equal to the key
            /// if not exit current return the oppsite node
            if(!root->left) return root->right;
            if(!root->right) return root->left;

            // this case handlee the most when the both of th child
            /**
             * we started from thee for the= the smallest from the right 
             * 
             */
            TreeNode* temp = root->right;

            /// this will find the stammlast one in the right

            while(temp->left) temp= temp->left;

            // replate the root value in the 
            root->val = temp->val;
            // then restart the searching of it
            root->right = deleteNode(root->right , temp->val);

        }
        
        return root;


    }
};

int main() {
    Solution sol;
    
    return 0;
}