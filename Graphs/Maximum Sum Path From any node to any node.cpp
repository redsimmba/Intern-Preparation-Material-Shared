 int func(Node* root, int &res){
        if(root==NULL){
            return 0;
        }
        int l=func(root->left,res);// left max sum
        int r=func(root->right,res);// right max sum
        int temp=max(root->data,root->data+max(l,r));// whether to include any of left or right with root data ( both -ve cases )
        int ans=max(temp,l+r+root->data);// if we consider the current subtree ulta U as an answer
        res=max(ans,res);// the final result
        return temp;// return our node or max of l,r + our node
    }
    int findMaxSum(Node* root)
    {
        int res=INT_MIN;
        int x=func(root,res);
        return res;
    }