vector<vector<int> > Solution::anagrams(const vector<string> &v) {
    int n=v.size();
    map<string,vector<int>> m;
    for(int i=0;i<n;i++){
        string t=v[i];
        sort(t.begin(),t.end());
        m[t].push_back(i+1);// sorted anagrams are same strings which will serve as the key for the map
    }
    vector<vector<int>> ans;
    for(auto i: m){
        vector<int> x=i.second;
        ans.push_back(x);// each vector is sorted on its own
    }
    return ans;
    
}
