

long long int dp[1001][1001];
int func(int n, int sum, int first){// first is to say if the digit is first(can't have 0) or no
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    if(sum>9*n){
        return 0;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum]%1000000007;
    }
    int i;
    long long int cnt=0;
    if(first==1){
        i=1;
    }
    else{
        i=0;
    }
    for(;i<10;i++){
       cnt+=func(n-1,sum-i,0);
    }
    return dp[n][sum]=cnt%1000000007;
}
int Solution::solve(int n, int sum) {
    
    memset(dp,-1,sizeof(dp));
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    return func(n,sum,1)%1000000007;
}
