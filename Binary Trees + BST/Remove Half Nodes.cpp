/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* func(TreeNode* root){
     if(root==NULL){
         return NULL;
     }
    root->left=func(root->left);
    root->right=func(root->right);
    if(!root->left && !root->right){
        return root;
    }
    if(!root->left){
        return root->right;
    }
    if(!root->right){
        return root->left;
    }
    return root;
 }
TreeNode* Solution::solve(TreeNode* root) {
    TreeNode* x=func(root);
    return x;
}
