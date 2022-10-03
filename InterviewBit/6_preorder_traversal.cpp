/*  
    Difficulty :- medium
    Ref :- https://www.interviewbit.com/problems/preorder-traversal/
    Author :- palaksharma12 [https://github.com/palaksharma12]
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ret;
    if (!A) {
        return ret;
    }
    stack<TreeNode*> S;
    S.push(A);
    while (!S.empty()) {
        TreeNode * temp = S.top();
        S.pop();
        ret.push_back(temp->val);
        if (temp->right) {
            S.push(temp->right);
        }
        if (temp->left) {
            S.push(temp->left);
        }
    }
    return ret;
}
