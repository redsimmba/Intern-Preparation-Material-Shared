int Solution::solve(vector<int> &v) {
    
    int n=v.size();
    sort(v.begin(),v.end());
    if(v[n-1]==0){
        return 1;
    }
    // if(v[0]>n){
    //     return 1;
    // }
    --n;
    for(int i=1;i<v.size();i++){
        if(v[i]>v[i-1] && v[i-1]==n){
            return 1;
        }
        n--;
    }
    return -1;
}
