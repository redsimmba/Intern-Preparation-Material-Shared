// Recursive Code with memoisation

int func(vector<vector<int> > mat, int m, int n, int i, int j, vector<vector<int>> &dp){
    //Base Case
    if(i==m-1 && j==n-1){
        return dp[i][j]=mat[i][j];
    }
    if(i>=m || j>=n){
        return 100000;// Any random big integer
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    //Recursive Case
    int cand1=mat[i][j]+func(mat,m,n,i,j+1,dp);// Next movement is rightward
    int cand2=mat[i][j]+func(mat,m,n,i+1,j,dp);// Next movement is downward
    return dp[i][j]=min(cand1,cand2);
}



int Solution::minPathSum(vector<vector<int> > &mat) {
    int m=mat.size();
    int n=mat[0].size();
    vector<vector<int>> dp(m,vector<int> (n,-1));
    return func(mat,m,n,0,0,dp);//i and j
}

// bottom Up DP code
