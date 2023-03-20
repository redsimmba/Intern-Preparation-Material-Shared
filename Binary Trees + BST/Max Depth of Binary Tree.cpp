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
     return max(func(head->left),func(head->right))+1;
 }
int Solution::maxDepth(TreeNode* head) {
    return func(head);
}
