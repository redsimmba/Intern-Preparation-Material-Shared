int func(vector<int> v, int n, int i, int j,vector<vector<int>> &dp ){
    if(i>j){// If i>=j then our function is erraneous and we return max profit as 0
        return dp[i][j]=0;
    }
    if(i==j){
        return dp[i][j]=v[i];// If only one element is left, then we take it directly and return
    }
    if(dp[i][j]!=-1){
        return dp[i][j];// Memoised case
    }
    int cand1=v[i]+min(func(v,n,i+2,j,dp),func(v,n,i+1,j-1,dp));// if we take the ith element, then the opponent will take the max(ans obtained by taking first or last). Thus we take min of the two cases

    int cand2=v[j]+min(func(v,n,i+1,j-1,dp),func(v,n,i,j-2,dp));// Similar if we take the jth element
    return dp[i][j]=max(cand1,cand2);// As we are playing optimally, we take the max of the two cases to maximise profit.
    
}



int Solution::maxcoin(vector<int> &v) {
    int n=v.size();
    vector<vector<int>> dp(n+1,vector<int> (n+1,-1));// Initialised as -1 her only, else use the loops below
    // for(int i = 0; i < n+1; i++)
    // {
    //     for(int j = 0; j < n+1; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }
    return func(v,n,0,n-1,dp);// 0 and n-1 as we move first
}
