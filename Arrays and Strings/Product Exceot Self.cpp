  vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        int prefix=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prefix;
            prefix*=v[i];
        }
        prefix=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=prefix;
            prefix*=v[i];
        }
        return ans;
    }