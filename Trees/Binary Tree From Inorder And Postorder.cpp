int find(vector<int> &v, int s, int e, int val){// Find index in inorder vector
    for (auto b = s; b<=e; ++b)
        if (v[b]==val)
            return b;
}
 TreeNode* func(vector<int> &ino, vector<int> &post, int s, int e, int &i){
     if(s>e){
         return NULL;
     }
     
      TreeNode* root=new TreeNode(post[i--]);
     int index=find(ino,s,e,root->val);// find inorder index
      root->right=func(ino,post,index+1,e,i);// First Right 
     root->left=func(ino,post,s,index-1,i);// Then Left

     //One important observation is, we recursively call for the right subtree before the left subtree as we decrease the index of the postorder index whenever we create a new node. 
    
     return root;
 }
TreeNode* Solution::buildTree(vector<int> & ino, vector<int> & post) {
    int n=ino.size();
    // if(n==0){
    //     return NULL;
    // }
    int i=n-1;
    return func(ino,post,0,n-1,i);// start, end in inorder, index in pre order
}