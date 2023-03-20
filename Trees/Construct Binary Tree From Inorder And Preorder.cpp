int find(vector<int> &v, int s, int e, int val){// Find index in inorder vector
    for (auto b = s; b<=e; ++b)
        if (v[b]==val)
            return b;
}
 TreeNode* func(vector<int> &ino, vector<int> &pre, int s, int e, int &i){
     if(s>e){
         return NULL;
     }
     
      TreeNode* root=new TreeNode(pre[i++]);
     // if(s==e){
     //     return root;// NOT required, above statement will suffice
     // }
    
    
     int index=find(ino,s,e,root->val);// find inorder index
     root->left=func(ino,pre,s,index-1,i);
     root->right=func(ino,pre,index+1,e,i);
     return root;
 }
TreeNode* Solution::buildTree(vector<int> & pre, vector<int> & ino) {
    int n=ino.size();
    if(n==0){
        return NULL;
    }
    int i=0;
    return func(ino,pre,0,n-1,i);// start, end in inorder, index in pre order
}


// Don't use MAP
