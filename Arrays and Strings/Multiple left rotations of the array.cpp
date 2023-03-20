vector<int> rotate(vector<int> v, int k){
    int n=v.size();
    k=k%n;
    vector<int> x;
    for(int i=k;i<n;i++){
        x.push_back(v[i]);
    }
    for(int i=0;i<k;i++){
        x.push_back(v[i]);
    }
    return x;
}

vector<vector<int> > Solution::solve(vector<int> &a, vector<int> &b) {
    vector<vector<int>> ans;
    for(int i=0;i<b.size();i++){
        vector<int> x= rotate(a,b[i]);
       
        ans.push_back(x);
    }
    return ans;
}
