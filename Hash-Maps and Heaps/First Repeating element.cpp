//Single Pass Strategy

int Solution::solve(vector<int> &v) {
    unordered_map<int,int> map;
    int n=v.size();
    int ans=-1;
    for(int i=n-1;i>=0;i--){
        if(map[v[i]]>0){
            ans=v[i];
        }
        map[v[i]]++;
        
    }
    return ans;
}

//2 paas Strategy
int Solution::solve(vector<int> &v) {
    unordered_map<int,int> map;
    for(int i=0;i<v.size();i++){
        map[v[i]]++;
    }
    for(int i=0;i<v.size();i++){
        if(map[v[i]]>1){
            return v[i];
        }
    }
    return -1;
}