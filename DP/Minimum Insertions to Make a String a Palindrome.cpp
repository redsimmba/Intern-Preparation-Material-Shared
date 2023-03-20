int countMin(string s){
        int n=s.length();
        vector<vector<int>> t(n+1,vector<int> (n+1,0));// length of both strings is the same
     string a=s;
     reverse(s.begin(),s.end());
     string b=s;
     for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i-1]==b[j-1]){
				t[i][j]=1+t[i-1][j-1];// if characters match
			}
			else{
				t[i][j]=max(t[i-1][j],t[i][j-1]);// if characters don't match
			}
		}
	}
    int lcs=t[n][n];// length of the lcs of a and rev(a) which is the LPS of a.
    return n-lcs;// remove all char

}
    // Same as deletions