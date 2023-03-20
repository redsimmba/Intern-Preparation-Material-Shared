 // Iterative Solution

 bool isSubSequence(string a, string b) 
    {
        int i=0;// Pointer for a
        int j=0;// Pointer for b
        while(i<a.length() && j<b.length()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i==a.length();
    }

// LCS  Solution, Worse solution, Fails test cases
  bool isSubSequence(string a, string b) 
    {
        int n1=a.length();
        int n2=b.length();
        vector<vector<int>> t(n1+1,vector<int> (n2+1,0));// to store lengths for lcs
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(a[i-1]==b[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n1][n2]==n1;
    }

    // If length of LCS bw the two strings is equal to the length of the first string, then we can return true.