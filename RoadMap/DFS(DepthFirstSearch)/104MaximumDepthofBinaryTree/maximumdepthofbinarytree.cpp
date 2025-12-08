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

// this time to use the recuron so
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return 1+ max(maxDepth(root->left) , maxDepth(root->right));
    }
};

int main() {
    Solution sol;
    
    return 0;
}

// for this situation simple fabiounachhi serious vala recursoin apply ho raha aur kuchh nahi
