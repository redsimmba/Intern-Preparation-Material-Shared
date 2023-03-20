/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 bool func(TreeNode* head, int sum){
     if(head==NULL){
         return 0;
     }
     int new_sum=sum-head->val;
     if(new_sum==0 && (!head->left && !head->right)){// If leaf is reached and sum is reached too
         return 1;
     }
     
     return func(head->left,new_sum) || func(head->right,new_sum);// Check in left and right
     
 }
int Solution::hasPathSum(TreeNode* head, int target) {
    return func(head,target);
    
}
