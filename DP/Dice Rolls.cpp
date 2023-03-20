
int mod=1e9+7;
int func(int sum, long long int *t){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    if(t[sum]!=-1){
        return t[sum];
    }
    
    // Recursive
    long long int cnt=0;
    for(int i=1;i<=6;i++){
        cnt+=func(sum-i,t);
    }
    return t[sum]=cnt%mod;
    
}

int Solution::solve(int c) {
    long long int t[c+1];// DON't pre declare the size
    memset(t,-1,sizeof(t));
    if(c<1){
        return 0;
    }
    return func(c,t);// we can take any number of attempts at rolling the dice.
}
