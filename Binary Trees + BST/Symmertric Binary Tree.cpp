/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool func(TreeNode* head1, TreeNode* head2){
     if(!head1 && !head2){
         return 1;
     }
     if(!head1 || !head2){
         return 0;// Both NULL case handled above
     }
     if(head1->val!=head2->val){
         return 0;
     }
     return func(head1->left,head2->right) && func(head1->right,head2->left);
     
 }
int Solution::isSymmetric(TreeNode* head) {
    return func(head->left,head->right);
}
