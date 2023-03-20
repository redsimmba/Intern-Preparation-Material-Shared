bool func(vector<int> &v, int s, int n, map<int,bool> &m){
        if(s<0 || s>=n){
            return 0;
        }
        if(v[s]==0){
            return 1;
        }
        if(m[s]==true){
            return 0;
        }
        m[s]=true;
        int cand=0;
        if(s+v[s]<n && m[s+v[s]]==false){
        cand = cand | func(v,s+v[s],n,m);
        }
        if(s-v[s]>=0 && m[s-v[s]]==false){
        cand = cand | func(v,s-v[s],n,m);
        }
     
        return cand;
    }
    bool canReach(vector<int>& v, int s) {
        int n=v.size();
        map<int,bool> m;
        return func(v,s,n,m);
        
    }