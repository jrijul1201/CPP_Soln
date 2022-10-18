/*  
    Difficulty :- medium
    Ref :- https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt/
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
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int> > ret;
    if (!A) {
        return ret;
    }
    std::stack<TreeNode*> rtl;
    std::stack<TreeNode*> ltr;
    ltr.push(A);
    
    while (!rtl.empty() || !ltr.empty()) {
        vector<int> level;
        while (!ltr.empty()) {
            TreeNode *temp = ltr.top();
            ltr.pop();
            level.push_back(temp->val);
            
            if (temp->left) {
                rtl.push(temp->left);
            }
            if (temp->right) {
                rtl.push(temp->right);
            }
        }
        if (!level.empty()) {
            ret.push_back(level);
            level.clear();   
        }
        while (!rtl.empty()) {
            TreeNode *temp = rtl.top();
            rtl.pop();
            level.push_back(temp->val);
            
            if (temp->right) {
                ltr.push(temp->right);
            }
            if (temp->left) {
                ltr.push(temp->left);
            }
        }
        if (!level.empty()) {
            ret.push_back(level);
            level.clear();   
        }
    }
    return ret;
}
