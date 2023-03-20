int Solution::anytwo(string s) {
    int n=s.length();
        string a=s;
        string b=s;
        vector<vector<int>> t(n+1,vector<int> (n+1,0));// to store lengths for lcs
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1] && i!=j){// i!=j as same element cannot be a part of 2 diff subsequences
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
          return t[n][n]>1;// if longest repeating subsequence length is >1.
}
