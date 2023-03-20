vector<int> Solution::solve(vector<int> &v) {
    int n=v.size();
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]=-1;
    }
    for(int i=0;i<n;i++){
        if(m[v[i]]<0){
            m[v[i]]=i;
        }
        else{
            int index=m[v[i]];// first occurence
            v[index]++;// increment
            m[v[index]]=index;// first occurence of that element is updated
            m[v[i]]=i;// new first occurence of this element
        }
    }
    return v;
}
