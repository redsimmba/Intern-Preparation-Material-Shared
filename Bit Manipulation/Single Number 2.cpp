int Solution::singleNumber(const vector<int> &v) {
    int n=v.size();
    int ans=0;
    for(int i=0;i<32;i++){
        int num=0;
        for(int j=0;j<n;j++){
            num+=(v[j]&(1<<i));
        }
        if(num%3){
            ans+=(pow(2,i));
        }
    }
    return ans;
}
