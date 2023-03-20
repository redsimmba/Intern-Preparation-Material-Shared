vector<int> Solution::solve(vector<int> &v) {
    int n=v.size();
    vector<long long int> pre(n);// Prefix Array
    vector<long long int> suf(n);// Suffix Array
    int mod=1e9+7;
    int j=n-1;
    long long int ans1=1;
    long long int ans2=1;
    for(int i=0;i<n;i++){
        pre[i]=(ans1*v[i])%mod;
        ans1=pre[i];
        suf[j]=(ans2*v[j])%mod;
        ans2=suf[j];
        j--;
    }
    vector<int> x(n);
    x[0]=suf[1];
    for(int i=1;i<n-1;i++){
        long long int temp1=pre[i-1];
        long long int temp2=suf[i+1];
        x[i]=(temp1*temp2)%mod;
    }
    x[n-1]=pre[n-2];
    return x;
    
    
}
