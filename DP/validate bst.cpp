  void func(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return;
        }
        func(root->left,v);
        v.push_back(root->val);
        func(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        func(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]<=v[i]){
                return false;
            }
        }
        return true;
    }
    // recursive approach
     bool isbst(TreeNode * root, long long int l, long long int r){
        if(root==NULL){
            return true;
        }
        if(root->val>l and root->val<r and isbst(root->left,l,root->val) and isbst(root->right,root->val,r)){
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        if(!root->left and !root->right){
            return 1;
        }
        return isbst(root,-2147483649,2147483649);
    }
    