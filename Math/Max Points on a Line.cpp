class Solution {
public:
double slope(vector<int> a, vector<int> b){
    int y=b[1]-a[1];
    int x=b[0]-a[0];
    return y/(x*1.0);
}
    int maxPoints(vector<vector<int>>& mat) {
        int ans=1;
        int n=mat.size();
        for(int i=0;i<n;i++){
            unordered_map<double,int> m;
            for(int j=i+1;j<n;j++){
                double y=slope(mat[i],mat[j]);
                if(mat[i][0]==mat[j][0]){
                    m[-1000]++;
                }
                m[y]++;
                ans=max(ans,m[y]+1);
                ans=max(ans,m[-1000]+1);
            }
        }
        return ans;
    }
};