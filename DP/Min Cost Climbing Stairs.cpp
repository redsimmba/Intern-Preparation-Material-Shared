//DP approach, both top down and bottom up
class Solution {
public:
    int topdown(int n,vector<int>& v, int i, vector<int>&dp){
        int a,b;
        
        if(n<=1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        a = v[i-1]+func(n-1, v, i-1,dp);
        b = v[i-2]+func(n-2, v, i-2,dp);
        
        return dp[i]=min(a,b); 
    }
    int minCostClimbingStairs(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n+1,-1);
        //Recursive Solution
        //return topdown(n,v,n,dp);

        //Iterative Solution
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<n+1;i++){
            dp[i]=min(dp[i-1]+v[i-1],dp[i-2]+v[i-2]);
        }
        return dp[n];
        
    }
};