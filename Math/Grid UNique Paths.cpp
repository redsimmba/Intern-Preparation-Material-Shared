int dp[1002][1002];
    int func(vector<vector<int> > mat, int m, int n, int i, int j){
    //Base Case
     if(i>=m || j>=n){
        return 0;
    }
//     if(mat[i][j]==1){
//         return 0;
//     }
   
    if(i==m-1 && j==n-1){
        return 1;
    }
   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    //Recursive Case
    return dp[i][j]=func(mat,m,n,i,j+1)+func(mat,m,n,i+1,j);
}


int Solution::uniquePaths(int m, int n) {
    vector<vector<int>> mat(m,vector<int> (n,0));
        memset(dp,-1,sizeof(dp));
    
        return func(mat,m,n,0,0);
    }


    // OR USE COMBINATION METHOD, PnC and calculate by reduction formula