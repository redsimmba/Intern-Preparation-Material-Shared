int Solution::solve(vector<int> &v) {
    map<int,int> m;// map to store the frequencies of the elements
    int n=v.size();
    int maxa=0;// to store maximum frequency
    for(int i=0;i<n;i++){
        m[v[i]]++;
        if(m[v[i]]>maxa){
            maxa=m[v[i]];
        }
    }
    return maxa;// the element with the maximum frequency will take maximum time to clear from the array
    
}
