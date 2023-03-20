/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* func(TreeNode* root1, TreeNode* root2){
     if(root1==NULL && root2==NULL){
         return NULL;
     }
     TreeNode* root;
     if(root1==NULL && root2){
        root=new TreeNode(root2->val);
        root->left=func(NULL,root2->left);
        root->right=func(NULL, root2->right);
     }
     else if(root1 && root2==NULL){
        root=new TreeNode(root1->val);
        root->left=func(root1->left,NULL);
        root->right=func(root1->right, NULL);
     }
     else{
     
    root=new TreeNode(root1->val + root2->val);
     root->left=func(root1->left,root2->left);// Can't genralise as no left/right exists for NULL
     root->right=func(root1->right, root2->right);
     }
     return root;
 }
TreeNode* Solution::solve(TreeNode* root1, TreeNode* root2) {
    return func(root1,root2);
}
