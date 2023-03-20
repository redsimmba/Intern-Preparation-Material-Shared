
 int mod;
 long long int ans;
 void func(TreeNode* head, string t){
     if(head==NULL){// if we reach a non leaf null, like root, we simply return
        return;
     }
     if(head->left==NULL && head->right==NULL){// if its a leaf node
          char ch=(head->val)+48;
         t=t+ch;
         long long int x=stoll(t);
         ans=(ans+x)%mod;// %mod to remain in range
         return;
     }
     char x=(head->val)+48;
     t=t+x;
     int y=stoll(t)%mod;// %mod to remain in range
     t=to_string(y);
     func(head->left,t);
     func(head->right,t);
     
 }
int Solution::sumNumbers(TreeNode* head) {
    mod=1003;
    ans=0;
    string t;
    func(head,t);
    return ans;
}

