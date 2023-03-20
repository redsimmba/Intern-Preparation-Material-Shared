
vector<int> Solution::solve(TreeNode* head) {
    vector<int> v;
    if(head==NULL){
        return v;
    }
    queue<TreeNode*> q;
    q.push(head);
    while(!q.empty()){
        int n=q.size();// Nice method for level order traversal's first or last element
        while(n--){
           TreeNode*x=q.front();
            q.pop();
            if(n==0){
                v.push_back(x->val);
            }
            if(x->left!=NULL){
                q.push(x->left);
            }
            if(x->right!=NULL){
                q.push(x->right);
            }
        }
    }
    return v;
    
}
