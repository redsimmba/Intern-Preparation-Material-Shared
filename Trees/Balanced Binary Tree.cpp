int flag;
 int depth(TreeNode* root){
     if(root==NULL){
         return -1;
     }
     int l=1+depth(root->left);
     int r=1+depth(root->right);
     if(abs(l-r)>1){
         flag=1;
     }
     return max(l,r);
 }
int Solution::isBalanced(TreeNode* root) {
    
    flag=0;
    int x=depth(root);
    return !flag;
}
