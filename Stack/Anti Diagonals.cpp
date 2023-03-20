
vector<vector<int> > Solution::diagonal(vector<vector<int> > &mat) {
    vector<vector<int> > ans;
    int n=mat.size();
    vector<vector<int>> v(2*n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i+j].push_back(mat[i][j]);// for 3*3, 0,1 and 1,0 both will have contribution in same result vector
        }
    }
    for(int i=0;i<v.size();i++){
        ans.push_back(v[i]);
    }
    return ans;
}


// use the fact that we need to return all elements having same index sum in the same vector, sorted.