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
    TreeNode* successorinBST(TreeNode* root , TreeNode* p){

        TreeNode* succ = nullptr;

        while(true){
            /// compairng the for he p value
            if(p->val < root->val){
                succ = root;

                root = root->left;
            }else{
                root = root->right;
            }

        }

        return succ;
    }
};

int main() {
    Solution sol;
    
    return 0;
}