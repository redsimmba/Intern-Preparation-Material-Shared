vector<vector<int> > Solution::solve(vector<vector<int> > &v) {
    int n=v.size();
    int s=0;
    while(s<n){
        for(int i=s;i<n;i++){
            swap(v[s][i],v[i][s]);
        }
        s++;
    }
    return v;
}
