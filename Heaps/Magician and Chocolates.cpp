int Solution::nchoc(int t, vector<int> &v) {
    int n=v.size();
    int mod=1e9+7;
    priority_queue<long long int> q;
    for(int i=0;i<n;i++){
        q.push(v[i]);
    }
    long long int ans=0;
    while(t){
        long long int x=q.top();
        ans=(ans+x)%mod;
        q.pop();
        q.push(x/2);
        t--;
    }
    return ans;
}


// We just take the max vale in array and add that to the count and rplace it with x/2.