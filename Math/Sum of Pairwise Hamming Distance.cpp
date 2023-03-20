
int Solution::hammingDistance(const vector<int> &v) {
    long long int ans=0;
    int n=v.size();
    long long mod=1e9+7;
    for(int i=0;i<32;i++){
        long long int cnt=0;
        for(int j=0;j<n;j++){
            if(v[j] & (1<<i)){
                cnt++;
            }
        }
        long long temp=cnt*(n-cnt)*2;
        ans=(ans+temp)%mod;
    }
    return ans;
}

// we check the no of numbers where the ith bit is set, and total pairs would be cnt*(n-cnt)*2 ans we as taking (2,4) and (4,2) as different.