vector<int> Solution::solve(vector<int> &v) {
    vector<int> ans;
    int n=v.size();
    ans.push_back(v[n-1]);
    int maxa=v[n-1];
    for(int i=n-2;i>=0;i--){
        if(v[i]>maxa){
            maxa=v[i];
            ans.push_back(v[i]);
        }
        
    }
    return ans;
    
}
