// DP Memoisation Code, Self Intuitive and done, maintaining 2 pointers
int func(int i, int j, string s, vector<vector<int>> &v){
      if(i==j){// Means odd length string, middle element will always be a part of a palindrome, thus return 1
          return v[i][j]=1;
      }
      if(i>j){
          return 0;
      }
      if(v[i][j]!=-1){
          return v[i][j];
      }
      if(s[i]==s[j]){
          return v[i][j]=2+func(i+1,j-1,s,v);// if we get match, add 2 and continue func
      }
      int cand1=func(i+1,j,s,v);
      int cand2=func(i,j-1,s,v);
      return v[i][j]=max(cand1,cand2);// Like LCS, get max of the 2 candidates
  }
    int longestPalinSubseq(string s) {
        int n=s.length();
        vector<vector<int>> v(n,vector<int> (n,-1));
        return func(0,n-1,s,v);
    }

// Bottom Up Solution
// Using the lcs(a,rev(a)) solution


int Solution::solve(string s) {
     int n=s.length();
     vector<vector<int>> t(n+1,vector<int> (n+1,0));// length of both strings is the same
     string a=s;
     reverse(s.begin(),s.end());
     string b=s;// reversed string
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
    int lcs=t[n][n];// LPS=lcs(a,rev(a));, simple
    return lcs;
        
}
