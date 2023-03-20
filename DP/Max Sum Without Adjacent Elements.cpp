int func(int i, int n, vector<vector<int> > &v, int *dp){// &v is very important
    //Base Case
    if(i==n-1){
        return dp[i]=max(v[0][i],v[1][i]);// Last column mein find max
    }
    if(i>n-1){
        return 0;// Overflow case
    }
    // Recursive Case
    if(dp[i]!=-1){
        return dp[i];// DP
    }
    int cand2=INT_MIN;
    int cand1=max(v[0][i],v[1][i])+func(i+2,n,v,dp);// We choose the current column
    if(i<n-1){
        cand2=max(v[0][i+1],v[1][i+1])+func(i+3,n,v,dp);// If we can choose the next column (i+1) is defined
    }
    return dp[i]=max(cand1,cand2);// max of these two is answer
}


int Solution::adjacent(vector<vector<int> > &mat) {
    int n=mat[0].size();
    int dp[n];
    memset(dp,-1,sizeof(dp));
    return func(0,n,mat,dp);
}
