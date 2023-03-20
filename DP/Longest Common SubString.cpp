int longestCommonSubstr (string a, string b, int n1, int n2)
    {
        vector<vector<int>> t(n1+1,vector<int> (n2+1,0));
        int max_len=0;// basically apointer to find the maximum element/length stored in the matrix
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(a[i-1]==b[j-1]){// if substring is continued
                    t[i][j]=1+t[i-1][j-1];
                    max_len=max(max_len,t[i][j]);// update max element bucket
                }
                else{
                    t[i][j]=0;// if continuity is broken.
                }
            }
        }
        return max_len;
        
    }