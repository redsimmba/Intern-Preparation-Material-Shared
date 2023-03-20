vector<int> Solution::solve(TreeNode* root) {
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    
    map<TreeNode*,bool> m;
    while(!q.empty()){
        TreeNode* x=q.front();
        m[x]=true;
        ans.push_back(x->val);
        q.pop();
        if(!x->left and !x->right){
            continue;
        }
        if(!x->left){
            q.push(x->right);
        }
        if(!x->right){
            q.push(x->left);
        }
        if(x->left and x->right){
            q.push(x->right);// right before left
            q.push(x->left);
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

