// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends

int dp[21][21][21];
int fun(string a, string b, string c, int i, int j, int k){
    if((i==a.length() || j==b.length()) || k==c.length()){
        return dp[i][j][k]=0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    if(a[i]==b[j] && a[i]==c[k]){
        return dp[i][j][k]=1+fun(a,b,c,i+1,j+1,k+1);
    }
    return dp[i][j][k]=max({
        fun(a,b,c,i+1,j,k),
        fun(a,b,c,i,j+1,k),
        fun(a,b,c,i,j,k+1),
        fun(a,b,c,i+1,j+1,k),
        fun(a,b,c,i+1,j,k+1),
        fun(a,b,c,i,j+1,k+1)
    });
}
int LCSof3 (string a, string b, string c, int n1, int n2, int n3)
{
    memset(dp,-1,sizeof(dp));
    
    return fun(a,b,c,0,0,0);
    // your code here
}