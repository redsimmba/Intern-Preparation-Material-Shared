int Solution::cntBits(vector<int> &v) {
    int n=v.size();
    long long int cnt=0;
    long long int mod=1e9+7;
    for(int i=0;i<32;i++){
        long long int ans=0;
        for(int j=0;j<n;j++){
            if(v[j]&(1<<i)){
                ans++;
            }
        }
       long long  int temp=n-ans;
        long long int x=ans*temp*2;
        cnt=(cnt+x)%mod;
    }
    return cnt;
    
}

// just look at the no of 1s for every position and add very possible permutation to the ans