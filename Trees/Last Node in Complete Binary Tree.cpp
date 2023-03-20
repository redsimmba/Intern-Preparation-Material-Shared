// O(n) approach
int Solution::lastNode(TreeNode* root) {
    map<TreeNode*,bool> visit;
    queue<TreeNode*> q;
    q.push(root);
    int i=0;
    while(!q.empty()){
        TreeNode* x=q.front();
        i=x->val;
        visit[x]=true;
        q.pop();
        if(x->left){
            q.push(x->left);
        }
        if(x->right){
            q.push(x->right);
        }
    }
    return i;
    
}

// Better Solution, O(logn*logn)
int height(TreeNode* root){// height of a balanced tree , right exits ONLY if left exists
     int cnt=0;
     while(root){
         cnt++;
         root=root->left;
     }
     return cnt;
 }
int Solution::lastNode(TreeNode* root) {
    int h=height(root);
    if(h==1) return root->val;
    else if((h-1)==height(root->right)) return lastNode(root->right);// if right has nodes then go there
    else return lastNode(root->left);// else go to left
}
