bool searchMatrix(vector<vector<int>>& mat, int key) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(key>=mat[i][0] and key<=mat[i][m-1]){
                bool x= binary_search(mat[i].begin(),mat[i].end(),key);
                if(x==true){
                    return true;
                }
            }
        }
        return false;
        
    }


// Optimised approach
 bool search(vector<vector<int> > mat, int n, int m, int x) 
    {
        if(n==0){
            return -1;
        }
        int i=0;
        int j=m-1;
        int smol=mat[0][0];
        int large=mat[n-1][m-1];
        if(x<smol or x>large){
            return -1;
        }
        
        while(i<n and j>=0){
            if(mat[i][j]==x){
                return 1;
            }
            if(mat[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }