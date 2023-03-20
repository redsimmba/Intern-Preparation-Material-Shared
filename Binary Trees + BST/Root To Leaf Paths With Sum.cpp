/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<vector<int> > ans;
 void func(TreeNode* head, int sum, vector<int> v){
     if(head==NULL){
         return;
     }
     v.push_back(head->val);
     int new_sum=sum-head->val;
     if(new_sum==0 && (!head->left && !head->right)){
         ans.push_back(v);
         return;
     }
     
     func(head->left,new_sum,v);
     func(head->right,new_sum,v);
     
 }
vector<vector<int> > Solution::pathSum(TreeNode* root, int key) {
    ans.clear();
    vector<int> v;
    func(root,key,v);
    return ans;
}
