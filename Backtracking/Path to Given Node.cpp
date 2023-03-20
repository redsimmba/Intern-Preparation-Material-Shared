/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 void func(TreeNode* root, int b, vector<int> x,  vector<int> &v){// x is passes by value to maintain its value in a particular tree
     if(root==NULL){
         return;
     }
     if(root->val==b){
        x.push_back(b);
         v=x;
         return;
     }
     x.push_back(root->val);
     func(root->left,b,x,v);
     func(root->right,b,x,v);
 }
vector<int> Solution::solve(TreeNode* root, int b) {
    vector<int> x;
     vector<int> v;

    func(root,b,x,v);
    return v;
}
