int Solution::solve(vector<int> &v, int k) {
    int n=v.size();
    vector<int> x(n);// to store values of v[i]^k
    for(int i=0;i<n;i++){
        x[i]=v[i]^k;
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[x[i]]++;
    }
        int cnt=0;
        for(int i=0;i<n;i++){
            int temp=m[v[i]];
            cnt+=temp;
        }
        return (cnt/2);
    
}

// basic concept is that we are utilising properties of Xor.
// a^b=k -> a^b^k=k^k -> a^b^k=0 -> a^(b^k)=0, which implies that a==(b^k)

// So we just count the number of occurences of any v[i] in the 2nd array of (v[i]^k).
// AS its mentioned that k!=0, so we are safe from the case when v[i]^k=v[i];

