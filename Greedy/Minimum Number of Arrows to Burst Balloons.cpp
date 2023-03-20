// It is the Activity Selection Problem Only, Follow same algorithm
class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b){
        return b[1]>a[1];
    }
    int findMinArrowShots(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end(),compare);
        int cur_end=v[0][1];
        int ans=1;
        for(int i=1;i<n;i++){
            if(v[i][0]>cur_end){
                ans++;
                cur_end=v[i][1];
                
            }
            
        }
        return ans;
        
    }
};