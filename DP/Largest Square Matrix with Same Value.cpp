int solve(vector<vector<int>>& mat) {
    int r=mat.size();
    int c=mat[0].size();
    vector<vector<int>> t(r,vector<int> (c,1));// Minimum size is 1
    int ans=1;// Minimum when single element matrix we consider
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(mat[i][j]==mat[i-1][j] and mat[i][j]==mat[i][j-1] and mat[i][j]==mat[i-1][j-1]){// if it matches to its neighbouring elements
                t[i][j]=min(min(t[i][j-1],t[i-1][j]),t[i-1][j-1])+1;// Increment size of submatrix by 1
            }
            else{
            t[i][j]=1;// else single element
        }
        ans=max(ans,t[i][j]);// maximum matrix size
        }
      
        
    }
    return ans;
    
}

// This approach only works for square sub matrices.