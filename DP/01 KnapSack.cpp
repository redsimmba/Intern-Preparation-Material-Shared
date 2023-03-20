
//Top down memoisation DP approach

int t[1002][1002];
int knapsack(vector<int> val, vector<int> wt, int w, int n){
    if(w==0 || n==0){
        return 0;
    }
    if(t[n][w]!=-1){
        return t[n][w];
    }
    int cand1=0;
    int cand2=0;
    if(wt[n-1]<=w){
        cand1=val[n-1]+knapsack(val,wt,w-wt[n-1],n-1);
        
    }
    cand2=knapsack(val,wt,w,n-1);
    return t[n][w]=max(cand1,cand2);
}

int Solution::solve(vector<int> &val, vector<int> &wt, int w) {
    memset(t,-1,sizeof(t));
    int n=val.size();
    return knapsack(val,wt,w,n);
}

//Bottom Up Approach


int Solution::solve(vector<int> &val, vector<int> &wt, int w) {
    int n=val.size();
    int m=w;
    vector<vector<int>> t(n+1,vector<int> (m+1,0));//Initialised whole vector with 0
    
    //Recursive Code
    for(int i=1;i<=n;i++){// we use i-1 as we had 0th row initialsed as 0.
        for(int j=1;j<=w;j++){
            int cand1=INT_MIN;
            if(wt[i-1]<=j){
                cand1=val[i-1]+t[i-1][j-wt[i-1]];// We use j as the max capacity at that time is j NOT w
            }
            int cand2=t[i-1][j];
            t[i][j]=max(cand1,cand2);
        }
    }
    return t[n][m];
}

