// First way to evade duplicates and get output in sorted manner
map<vector<int>,bool> m;
void func(vector<int> v, vector<int> x, int n, vector<vector<int>> &ans, int sum, int key, int i){
    if(i==n){
        return;
    }
    if(sum==key){
        sort(x.begin(),x.end());// to ensure only sorted outputs are checked and pushed if necessary
        if(m[x]==true){
            return;
        }
        else{
             m[x]=true;
            ans.push_back(x);
            return;
        }
    }
    if(sum>key){
        return;
    }
    // we include current element in x
    if(sum+v[i]<=key){
    x.push_back(v[i]);
    func(v,x,n,ans,sum+v[i],key,i);
    x.pop_back();// backtrack
    }
    // we don't include the element
    func(v,x,n,ans,sum,key,i+1);
    
    
}
vector<vector<int> > Solution::combinationSum(vector<int> &v, int key) {
    m.clear();
    vector<int> x;
    vector<vector<int>> ans;
    int n=v.size();
    int sum=0;
    func(v,x,n,ans,0,key,0);
    sort(ans.begin(),ans.end());
    return ans;
}




/// 2nd way to evade duplicates and get output in sorted manner, better
map<vector<int>,bool> m;
void func(vector<int> v, vector<int> x, int n, vector<vector<int>> &ans, int sum, int key, int i){
    if(i==n){
        return;
    }
    if(sum==key){
        if(m[x]==true){
            return;
        }
        else{
             m[x]=true;
            ans.push_back(x);
            return;
        }
    }
    if(sum>key){
        return;
    }
    // we include current element in x
    if(sum+v[i]<=key){
    x.push_back(v[i]);
    func(v,x,n,ans,sum+v[i],key,i);
    x.pop_back();
    }
    // we don't include the element
    func(v,x,n,ans,sum,key,i+1);
    
    
}
vector<vector<int> > Solution::combinationSum(vector<int> &v, int key) {
    m.clear();
    vector<int> x;
    sort(v.begin(),v.end());// sort the vector to begin with
    vector<vector<int>> ans;
    int n=v.size();
    int sum=0;
    func(v,x,n,ans,0,key,0);
    sort(ans.begin(),ans.end());
    return ans;
}
