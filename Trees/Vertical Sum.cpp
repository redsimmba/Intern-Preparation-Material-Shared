void func(TreeNode* root, map<int,vector<int>>&m, int level){
     if(root==NULL){
         return;
     }
     m[level].push_back(root->val);
     func(root->left,m,level-1);
     func(root->right,m,level+1);
     
 }
vector<int> Solution::verticalSum(TreeNode* root) {
    map<int,vector<int>> m;
    func(root,m,0);
    vector<int> ans;
    for(auto i: m){
        vector<int> v=i.second;
        int sum=0;
        for(int j=0;j<v.size();j++){
            sum+=v[j];
        }
        ans.push_back(sum);
    }
    return ans;
}

// we use coordinates to define position of any element