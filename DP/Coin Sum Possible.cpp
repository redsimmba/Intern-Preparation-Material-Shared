// Memoisation Solution , Fails for space
int mod=1000007;
int func(vector<int> & v, int sum, int i, int n, vector<vector<int>> &t){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    if(i>=n){
        return 0;
    }
    if(t[sum][i]!=-1){
        return t[sum][i];
    }
    long long int cnt=0;
    long long cand1=func(v,sum-v[i],i,n,t);
    long long cand2=func(v,sum,i+1,n,t);
    cnt+=(cand1+cand2);
    return t[sum][i]=cnt%mod;
    
}

int Solution::coinchange2(vector<int> &v, int sum) {
   
    int n=v.size();
     vector<vector<int>> t(sum+1,vector<int> (n+1,-1));
    return func(v,sum,0,n,t);
    }

// Bottom Up Solution

int Solution::coinchange2(vector<int> &v, int sum) {
    int n=v.size();
    long long int t[n+1][sum+1];
    memset(t,0,sizeof(t));
    for(int i=0;i<=n;i++){
        t[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(v[i-1]<=j){
                int cand1=t[i][j-v[i-1]];
                int cand2=t[i-1][j];
                 t[i][j]=(cand1+cand2)%1000007;
            }
            else{
            t[i][j]=t[i-1][j]%1000007;
            }
        }
    }
    return t[n][sum];
}


// Space Optimised Bottom Up, BEST

int Solution::coinchange2(vector<int> &v, int sum) {
    int n=v.size();
    long long int t[sum+1];
    memset(t,0,sizeof(t));
    t[0]=1;// as max no of ways to make sum 0 is 1, EMPTY SET
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(v[i-1]<=j){
                int cand1=t[j-v[i-1]];
                int cand2=t[j];
                 t[j]=(cand1+cand2)%1000007;
            }
            else{
            t[j]=t[j]%1000007;
            }
        }
    }
    return t[sum];
}

