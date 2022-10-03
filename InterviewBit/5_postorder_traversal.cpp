/*  
    Difficulty :- medium
    Ref :- https://www.interviewbit.com/problems/postorder-traversal/
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

vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ret;
    if (!A) {
        return ret;
    }
    stack<TreeNode*> S,T;

    S.push(A);
    while (!S.empty()) {
        TreeNode * temp = S.top();
        S.pop();
        T.push(temp);
        if (temp->left)
            S.push(temp->left);
        if (temp->right)
            S.push(temp->right);
    }
    while (!T.empty()) {
        TreeNode * temp = T.top();
        T.pop();
        ret.push_back(temp->val);
    }
    return ret;
}
