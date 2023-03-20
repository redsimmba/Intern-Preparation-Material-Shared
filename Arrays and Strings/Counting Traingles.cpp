int Solution::nTriang(vector<int> &v) {
    int n=v.size();
    sort(v.begin(),v.end());
    long long int cnt=0;
    int mod=1e9+7;
    for(int i=n-1;i>=1;i--){
        long long int l=0,r=i-1;
        while(l<r){
            if(v[l]+v[r]>v[i]){// then l+1,l+2 etc will also satisfy
                cnt+=(r-l);
                cnt%=mod;
                r--;
            }
            else{
                l++;// Increase the value
            }
        }
    }
    return cnt;
}
