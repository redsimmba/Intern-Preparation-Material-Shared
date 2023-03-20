// Bottom Up Solution, just like 01 knapsack
 int knapSack(int N, int W, int val[], int wt[])
    {
        int t[N+1][W+1];
        // code here
        memset(t,0,sizeof(t));
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                int cand1=INT_MIN;
                if(wt[i-1]<=j){
                    cand1=val[i-1]+t[i][j-wt[i-1]];// Just i instead of i-1 here
                }
                int cand2=t[i-1][j];
                t[i][j]=max(cand1,cand2);
            }
        }
        return t[N][W];
    }


// Top down solution

 int t[1002][1002];
int func(int n, int w, int* val, int * wt){
    if(w==0 || n==0){
        return 0;
    }
    if(t[n][w]!=-1){
        return t[n][w];
    }
    int cand1=0;
    if(wt[n-1]<=w){
        cand1=val[n-1]+func(n,w-wt[n-1],val,wt);
    }
    int cand2=func(n-1,w,val,wt);
    return t[n][w]=max(cand1,cand2);
    
}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        memset(t,-1,sizeof(t));
        return func(N,W,val,wt);
        
    }

// Reduced Space Solution,, WE LOOK ONLY AT THE LAST ROW OF THE 2D MATRIX
    int knapSack(int N, int W, int val[], int wt[])
    {
        int t[W+1];
        // code here
        t[0]=0;
        memset(t,0,sizeof(t));
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                int cand1=INT_MIN;
                if(wt[i-1]<=j){
                    cand1=val[i-1]+t[j-wt[i-1]];// Just i instead of i-1 here and we just take 1 D array to store the max profit until that wt
                }
                int cand2=t[j];// Just to compare the present value i.e 0
                t[j]=max(cand1,cand2);
            }
        }
        return t[W];
    }

    // GENERAL RULE TO Convert 2D to 1D in case of Unbounded Knapsack
    // 1) Focus only on the weight part, make its 1d array.
    // 2) Then remove instances of i from where we access the array then simply return t[n].
