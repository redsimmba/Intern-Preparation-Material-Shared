int t[1002][1002];
int mod=1e9+7;
int func(int a, int b, int sum){
    if(sum==0 && a==0){// if all dice are used and sum is also achieved, else return 0 in every other case
        return 1;
    }
    if(sum<0){
        return 0;
    }
    if(a==0){
        return 0;
    }
    if(sum<a){
        return 0;
    }
    if(t[a][sum]!=-1){
        return t[a][sum];
    }
    
    // Recursive
    long long int cnt=0;
    for(int i=1;i<=b;i++){
        cnt+=func(a-1,b,sum-i);
    }
    return t[a][sum]=cnt%mod;
    
}

int Solution::findDiceSum(int a, int b, int c) {
    memset(t,-1,sizeof(t));
    if(c<a){
        return 0;// We essentially need to use all the dices
    }
    return func(a,b,c);
}
