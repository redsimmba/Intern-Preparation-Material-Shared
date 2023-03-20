/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 void func(TreeNode* head,vector<int> & v){
     if(head==NULL){
         return;
     }
     func(head->left,v);
     v.push_back(head->val);
     func(head->right,v);
 }
vector<int> Solution::inorderTraversal(TreeNode* head) {
    vector<int> v;
    func(head,v);
 
    return v;
}
