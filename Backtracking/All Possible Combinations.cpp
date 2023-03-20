void func(vector<string> v, int i, string t,vector<string> & ans, int n){
    if(i==n){
        ans.push_back(t);
        return;
    }
    for(int j=0;j<v[i].length();j++){
        string x=t;
        t=t+v[i][j];// Include the element
        func(v,i+1,t,ans,n);
        t=x;// bring the string back to normal level
    }
}

vector<string> Solution::specialStrings(vector<string> &v) {
    map<string,int> m;
    int n=v.size();
    vector<string> ans;
    func(v,0,"",ans,n);
    return ans;
}
