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
    TreeNode* insertValue(TreeNode* root, int val){
        
        // base case for the reaches the end
        if(!root) return new TreeNode(val);


        if(val < root->val){
            root->left  = insertValue(root->left , val);
        }else{
            root->right = insertValue(root->right, val);
        }

        return root;
    }

    bool serchIntheTree(TreeNode* root , int val){

        if(!root) return false;


        if(root->val == val) return true;


        if(val < root->val){
            serchIntheTree(root->left, val);
        }

        return serchIntheTree(root->right , val);
    }

    int findMin(TreeNode* root){
        // just before the end// stoped before the end
        while(root->left) root = root->left;

        return root->val;
    }

    int findMax(TreeNode* root){
        
        // just staop /// as we know max in the right always

        while(root->right) root = root->right;

        return root->val;
    }
    

};

int main() {
    Solution sol;
    
    return 0;
}