bool func(vector<int> & v, long long int n,long long int i, vector<int> &t){// pass the dp array in the function
    if(i>=n){
        return 0;
    }
    if(i==n-1){
        return 1;
    }
    if(t[i]!=-1){
        return t[i];
    }
    long long int cand=0;
    for(int j=i+1;j<=i+v[i];j++){
        cand = cand | func(v,n,j,t); 
    }
    return t[i]=cand;
}

int Solution::canJump(vector<int> &v) {
    int n=v.size();
    vector<int> t(n+1,-1);
    return func(v,n,0,t);
}

// O(n) greedy solution
int Solution::canJump(vector<int> &v) {
    int n=v.size();
    int reached=n-1;
    for(int i=n-2;i>=0;i--){// start from back to find whther we can go to that index form a previous index
        if(v[i]+i>=reached){
            reached=i;
        }
    }
    return reached==0;
    
}
