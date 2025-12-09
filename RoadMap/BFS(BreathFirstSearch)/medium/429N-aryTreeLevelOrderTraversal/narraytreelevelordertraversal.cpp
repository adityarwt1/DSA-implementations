#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> result;

        queue<Node*> q;

        q.push(root);

        while(!q.empty()){
            int size = q.size();

            vector<int> level;

            while(size--){
                Node* node = q.front();
                q.pop();
                // push the current alue as well
                level.push_back(node->val);
                for(Node* node:node->children){
                    q.push(node);
                }
            }

            result.push_back(level);
        }

        return result;
    }
};