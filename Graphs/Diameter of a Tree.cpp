int func(Node* root, int &res){
        if(root==NULL){
            return 0;
        }
        int l=func(root->left,res);
        int r=func(root->right,res);
        int temp=1+max(l,r);
        int ans=max(l+r+1,temp);
        res=max(res,ans);
        return temp;
    }
    int diameter(Node* root) {
        int res=INT_MIN;
        int x=func(root,res);
        return res;
    }