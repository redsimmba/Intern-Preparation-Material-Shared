//Best and intuitive Approach, Sort and Apply Greedy

class Solution {
public:
    static bool comp(vector<int> a, vector<int> b){
        return b[1]<a[1];
    }
    int maximumUnits(vector<vector<int>>& v, int key) {
        sort(v.begin(),v.end(),comp);
        // for(int i=0;i<v.size();i++){
        //     for(int j=0;j<v[i].size();j++){
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i][0]<key){
                ans+=v[i][1]*v[i][0];
                key-=v[i][0];
            }
            else{
                ans+=v[i][1]*(key);
                key=0;
            }
            if(key==0){
                break;
            }
        }
        return ans;
    }
};