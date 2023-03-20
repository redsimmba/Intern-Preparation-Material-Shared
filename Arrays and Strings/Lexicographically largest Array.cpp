vector<int> Solution::solve(vector<int> &v) {
    int n=v.size();
    int i=0;
    for(;i<n;i++){
        if(v[i]<v[n-1]){// first element from beginning which is smaller than the last element
            break;
        }
    }
    reverse(v.begin()+i,v.end());
    
    return v;
    
    
}