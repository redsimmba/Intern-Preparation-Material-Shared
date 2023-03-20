int Solution::solve(vector<int> &v) {
    int odd=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            odd++;
        }
    }
    if(odd==0){
        return 0;
    }
    long long int mod=1e9+7;
    long long int x=1;
    for(int i=1;i<=odd;i++){// to calcute power of 2 to odd
        long long int temp=x*2;
        x=temp%mod;
    }
    return x-1;// simply is pow(2,odd)-1 with the mod included.
}
// this due to nC1+nC2+nC3-----nCn=2^n-1;