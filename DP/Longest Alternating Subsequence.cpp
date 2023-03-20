int solve(vector<int>& v) {
    int n=v.size();
    if(n<=1){
        return n;
    }
    int cur=v[1]-v[0];
    int cnt=1+(v[1]!=v[0]);
    for(int i=2;i<n;i++){
        int diff=v[i]-v[i-1];
        if((diff>0 and cur<=0) or (diff<0 and cur>=0)){
            cnt++;
            cur=diff;
        }
    }
    return cnt;
    
}

// Wiggle Subsequence on Leetcode

int max_zero(int n,vector<int>& nums)
{
    vector<int> dp(n,1);
    vector<int> s(n,0);
    // vector<int> sn(n,0);
    int ans = -1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[j]==1 && nums[i]<nums[j])
            {
                int c = 1 + dp[j];
                s[i]=0;
                dp[i] = max(c,dp[i]);
            }
            else if(s[j]==0 && nums[i]>nums[j])
            {
                int c = 1 + dp[j];
                s[i]=1;
                dp[i] = max(c,dp[i]);
            }

            
        }

        ans = max(ans,dp[i]);
    }    

    return ans;
}
int max_one(int n,vector<int>& nums)
{
    vector<int> dp(n,1);
    vector<int> s(n,1);
    // vector<int> sn(n,0);
    int ans = -1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[j]==1 && nums[i]<nums[j])
            {
                int c = 1 + dp[j];
                s[i]=0;
                dp[i] = max(c,dp[i]);
            }
            else if(s[j]==0 && nums[i]>nums[j])
            {
                int c = 1 + dp[j];
                s[i]=1;
                dp[i] = max(c,dp[i]);
            }

            
        }

        ans = max(ans,dp[i]);
    }    

    return ans;
}

int solve(vector<int>& nums) 
{
    int n = nums.size();
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    int z = max_zero(n,nums);
    int o = max_one(n,nums);
    return max(z,o);
}

//dp approach