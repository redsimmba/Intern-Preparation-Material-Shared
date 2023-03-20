// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    #define mod 1000000007
	public:
	int perfectSum(int v[], int n, int target)
	{
	    //int n=v.size();
        int t[n+1][target+1];
        memset(t,0,sizeof(t));
         for(int i=0;i<=target;i++){
            t[0][i]=0;
        }
        t[0][0]=1;
        // for(int i=0;i<=n;i++){
        //     t[i][0]=1;// 1 for weight 0, after coz we need to have t[0][0] as 1
        // }
       
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                if(v[i-1]<=j){
                    int cand1=t[i-1][j-v[i-1]]%mod;
                    int cand2=t[i-1][j]%mod;
                    t[i][j]=(cand1+cand2)%mod;// Add instead of OR, because we have to sum possible no of subsets with 2 cases.
                }
                else{
                    t[i][j]=t[i-1][j]%mod;
                }
                
            }
        }
        return t[n][target];
        // Your code goes here
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends