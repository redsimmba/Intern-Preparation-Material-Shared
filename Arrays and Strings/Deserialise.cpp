string Solution::serialize(vector<string> &v) {
    int n=v.size();
    string ans;
    for(int i=0;i<n;i++){
        string t=v[i];
        int l=t.length();
        ans+=t;
        ans+=to_string(l);
        ans+='~';
    }
    return ans;
}
