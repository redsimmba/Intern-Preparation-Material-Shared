int solve(vector<vector<int>>& mat) {
    int r=mat.size();
    int c=mat[0].size();
    int temp=0;
    for(int i=0;i<r;i++){// to handle all zero matrix cases
        for(int j=0;j<c;j++){
            if(mat[i][j]==1){
                temp=1;
                break;
            }
        }
    }
    if(temp==0){
        return 0;
    }
    vector<vector<int>> t(r,vector<int> (c,0));
    int maxa=1;
    for(int i=0;i<r;i++){
        t[i][0]=mat[i][0];
    }
    for(int i=0;i<c;i++){
        t[0][i]=mat[0][i];
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(mat[i][j]==1){
                t[i][j]=min(t[i-1][j],min(t[i][j-1],t[i-1][j-1]))+1;
                if(t[i][j]>maxa){
                    maxa=t[i][j];
                }
            }
            else{
                t[i][j]=0;
            }
        }
    }
    return pow(maxa,2);
    
}

// Basic Concept is to maintain the count of largest square in every sub matrix of (i,j);