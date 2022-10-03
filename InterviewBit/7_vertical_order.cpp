/*  
    Difficulty :- medium
    Ref :- https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/
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
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) {
    // Base case 
  vector<vector<int> >ans;
  if(root==NULL)return ans;
    // Create a map and store vertical oder in 
    // map using function getVerticalOrder() 
    map < int,vector<int> > m; 
    int hd = 0; 
  
    // Create queue to do level order traversal. 
    // Every item of queue contains node and 
    // horizontal distance. 
    queue<pair<TreeNode*, int> > que; 
    que.push(make_pair(root, hd)); 
  
     while (!que.empty()) 
     { 
        // pop from queue front 
        pair<TreeNode *,int> temp = que.front(); 
        que.pop(); 
        hd = temp.second; 
        TreeNode* node = temp.first; 
  
        // insert this node's data in vector of hash 
        m[hd].push_back(node->val); 
  
        if (node->left != NULL) 
            que.push(make_pair(node->left, hd-1)); 
        if (node->right != NULL) 
            que.push(make_pair(node->right, hd+1)); 
    } 
  
    // Traverse the map and print nodes at 
    // every horigontal distance (hd) 
    map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        ans.push_back(it->second);
    } 
    return ans;
}
