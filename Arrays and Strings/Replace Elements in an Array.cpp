//Easy Intuitive Approach
class Solution {
public:
    vector<int> arrayChange(vector<int>& v, vector<vector<int>>& oper) {
        int n=v.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[v[i]]=i;
        }
        int m=oper.size();
        for(int i=0;i<m;i++){
            int a=oper[i][0];
            int b=oper[i][1];
            int temp=map[a];
            v[temp]=b;
            map[b]=temp;// V Important line of code
        }
        return v;
        
    }
};