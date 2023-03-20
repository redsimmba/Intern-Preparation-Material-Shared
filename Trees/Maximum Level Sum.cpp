void func(TreeNode* root, map<int,vector<int>>&m, int level){
     if(root==NULL){
         return;
     }
     m[level].push_back(root->val);
     func(root->left,m,level+1);
     func(root->right,m,level+1);
     
 }
int Solution::solve(TreeNode*root) {
     map<int,vector<int>> m;
    func(root,m,0);
    vector<int> ans;
    for(auto i: m){
        vector<int> v=i.second;
        int x=accumulate(v.begin(),v.end(),0);
        ans.push_back(x);
    }
    return *max_element(ans.begin(),ans.end());
}