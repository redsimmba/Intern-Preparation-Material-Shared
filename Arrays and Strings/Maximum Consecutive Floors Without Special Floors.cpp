class Solution {
public:
    int maxConsecutive(int bot, int top, vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int ans=max(top-v[n-1], v[0]-bot);
        for(int i=1;i<n;i++){
            int temp=v[i]-v[i-1];
            ans=max(ans,temp-1);
        }
        
        return ans;
    }
};
//Nice Approach, max of all possible segments.