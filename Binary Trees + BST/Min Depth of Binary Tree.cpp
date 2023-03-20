/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int func(TreeNode* head){
     if(head==NULL){
         return 0;
     }
     if(head->left==NULL){
         return 1+func(head->right);
     }
     if(head->right==NULL){
         return 1+func(head->left);
     }
     return 1+min(func(head->left),func(head->right));
 }
int Solution::minDepth(TreeNode* head) {
    return func(head);
}


// Very Important, as in skewed cases, having a null early can give wrong results.
// Same situation doesn't arise in max