// Simple Sorting Approach
vector<int> Solution::subUnsort(vector<int> &v) {
    if(is_sorted(v.begin(),v.end())){
         vector<int> ans;
    ans.push_back(-1);
        return ans;
    }
    vector<int> t=v;
    sort(t.begin(),t.end());
    int start;
    int end;
    int temp=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=t[i] && temp==0){
            start=i;
            end=i;
            temp=1;
        }
        if(v[i]!=t[i] && temp==1){
            end=i;
        }
    }
    vector<int> ans;
    ans.push_back(start);
    ans.push_back(end);
    return ans;
    
}
