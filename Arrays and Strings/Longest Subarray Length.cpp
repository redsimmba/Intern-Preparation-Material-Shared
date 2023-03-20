int Solution::solve(vector<int> &v) {
    int n=v.size();
    int sum=0;
    map<int,int> m;
    int max_len=0;
    for(int i=0;i<n;i++){// to initialise the map with unreachabe indices like -2
        if(v[i]==0){
            sum--;
        }
        else{
            sum++;
        }
        m[sum]=-2;
        m[sum-1]=-2;
    }
    m[0]=-1;// sum 0 occurs at -1 so that length can be calculated accordingly
    sum=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            sum--;
        }
        else{
            sum++;
        }
        if(m[sum]==-2){// if no index is decided
            m[sum]=i;
        }
        if(m[sum-1]!=-2){// if sum-1, i.e index till where no of ones will be one more then zeroes. also we initialsed these as -2.
            max_len=max(max_len,i-m[sum-1]);
        }
    }
    return max_len;
    
}
