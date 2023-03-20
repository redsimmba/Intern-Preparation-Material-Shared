vector<vector<int>> ans;
void func(vector<int>&v, int s, int e){
    if(s==e){
        ans.push_back(v);// if we reach end, just push the answer
        return;
    }
    int i;
    for(i=s;i<=e;i++){
        swap(v[i],v[s]);// swap i with 0 index and permute the rest of the array
        func(v,s+1,e);
        swap(v[i],v[s]);// swap them back to avoid residual changes to array v.
    }
}
vector<vector<int> > Solution::permute(vector<int> &v) {
    ans.clear();
    int n=v.size();
    func(v,0,n-1);// vector , start, end
    return ans;
}
