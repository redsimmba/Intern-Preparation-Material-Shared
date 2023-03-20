// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int func(int n, vector<int> &dp){
	    //Base Case
	    if(n==1){
	        return 0;
	    }
	    //DP
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	    //Recursive
	    if(n%2==0 && n%3==0){
	        int cand1=func(n/2,dp)+1;
	        int cand2=func(n/3,dp)+1;
	        int cand3=func(n-1,dp)+1;
	        return dp[n]=min(cand1,min(cand2,cand3));
	    }
	    if(n%2==0){
	         int cand1=func(n/2,dp)+1;
	         int cand2=func(n-1,dp)+1;
	         return dp[n]=min(cand1,cand2);
	    }
	    if(n%3==0){
	         int cand1=func(n/3,dp)+1;
	         int cand2=func(n-1,dp)+1;
	         return dp[n]=min(cand1,cand2);
	    }
	    return dp[n]=func(n-1,dp)+1;
	}
	int minSteps(int n) 
	{ 
	    vector<int> dp(n+1,-1);
	    return func(n,dp);
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
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

//Another top down, much more simpler
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int func(int n, vector<int> &dp){
	    //Base Case
	    if(n==1){
	        return 0;
	    }
	    //DP
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	    //Recursive
	    int cand1=INT_MAX;
	    int cand2=INT_MAX;
	    int cand3=INT_MAX;
	    if(n%3==0){
	        cand1=func(n/3,dp);
	    }
	    if(n%2==0){
	        cand2=func(n/2,dp);
	    }
	    cand3=func(n-1,dp);
	    return dp[n]=min(min(cand1,cand2),cand3)+1;
	}
	int minSteps(int n) 
	{ 
	    vector<int> dp(n+1,-1);
	    return func(n,dp);
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
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

  //Bottom Up is simple only, just take care of the 3 conditions.