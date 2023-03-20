// Recursive Code with memoisation

int dp[102][102];
int func(vector<vector<int> > mat, int m, int n, int i, int j){
    //Base Case
     if(i>=m || j>=n){// First check if overflow is there or no
        return 0;
    }
    if(mat[i][j]==1){// CHeck for obstacles
        return 0;
    }
   
    if(i==m-1 && j==n-1){// If end is reached, then return 1 to add to the answer
        return 1;
    }
   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    //Recursive Case
    return dp[i][j]=func(mat,m,n,i,j+1)+func(mat,m,n,i+1,j);// ans=sum of right and down movements
}
int Solution::uniquePathsWithObstacles(vector<vector<int> > &mat) {
    int m=mat.size();
    int n=mat[0].size();
    
    memset(dp,-1,sizeof(dp));
    
    return func(mat,m,n,0,0);

}


// Bottom Up DP Code
