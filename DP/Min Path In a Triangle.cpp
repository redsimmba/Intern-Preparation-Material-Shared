// Recursive + Memoisation Solution


int func(vector<vector<int>> &mat, int n, int i, int j, vector<vector<int>> &t){// Use & before mat, else gives memory limit exceeded
    if(i==n){// If we reach the last row
        return 0;
    }
    if(j>=mat[i].size()){// If j exceeds the indices on that particular row of the matrix
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int cand1=mat[i][j]+func(mat,n,i+1,j,t);
    int cand2=mat[i][j]+func(mat,n,i+1,j+1,t);
    return t[i][j]=min(cand1,cand2);
}


int Solution::minimumTotal(vector<vector<int> > &mat) {
    int n=mat.size();
    vector<vector<int>> t(n+1,vector<int> (n+1,-1));
    return func(mat,n,0,0,t);
}
