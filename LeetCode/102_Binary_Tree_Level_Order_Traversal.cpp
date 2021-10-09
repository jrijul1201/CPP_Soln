/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/binary-tree-level-order-traversal/
    Author :- AmitThakur [https://github.com/AmitThakur045]
*/

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
        if(root == NULL)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        TreeNode* tmp;
        q.push(root);
        while(!q.empty()) {
            vector<int> ans;
            int len = q.size();
            for(int i=0; i<len; i++) {
                TreeNode* node = q.front();
                q.pop();
                ans.push_back(node->val);
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right) {
                    q.push(node->right);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};