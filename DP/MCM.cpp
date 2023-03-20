// Recursive Code
int func(int *a, int i, int j){
    if(i>=j){
        return 0;
    }
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        int solve = func(a,i,k)+func(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(solve<ans){
            ans=solve;
        }
    }
    return ans;
}
    int matrixMultiplication(int n, int a[])
    {
        return func(a,1,n-1);
    }


// Memoised Recursive Code
    int func(int *a, int i, int j, vector<vector<int>> &t){
    if(i>=j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        int solve = func(a,i,k,t)+func(a,k+1,j,t)+a[i-1]*a[k]*a[j];
        if(solve<ans){
            ans=solve;
        }
    }
    return t[i][j]=ans;
}
    int matrixMultiplication(int n, int a[])
    {
        vector<vector<int>> t(n+1, vector<int> (n+1,-1));
        return func(a,1,n-1,t);
    }

 

