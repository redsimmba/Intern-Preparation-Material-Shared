string shortestCommonSupersequence(string a, string b) {
        int n1=a.length();
        int n2=b.length();
        string s;
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
        int i=n1;
        int j=n2;
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){// if match found, print only once
                s=s+a[i-1];
                i--;
                j--;
            }
            else{
                if(t[i-1][j]>t[i][j-1]){
                    s=s+a[i-1];// include the character in whose direction we will move and update direction
                    i--;
                }
                else{
                    s=s+b[j-1];
                    j--;
                }
                
            }
        }
        // Now if extra elements are left unprinted in any one string, we simply print them one by one
        while(i>0){
            s=s+a[i-1];
            i--;
        }
        while(j>0){
            s=s+b[j-1];
            j--;
        }
        reverse(s.begin(),s.end());// reverse to get the final string
        return s;
        
    }