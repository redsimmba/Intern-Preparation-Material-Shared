#define pii pair<int,int>
#define mp make_pair
int func(vector<pii> v, int n){
    if(n<2){
        return n;
    }
    int maxa=0;
    int overlap,curmax,verticalpoints;
    map<pii,int> m;
    for(int i=0;i<n;i++){
        curmax=overlap=verticalpoints=0;
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                overlap++;
            }
            else if(v[i].first==v[j].first){
                verticalpoints++;
            }
            else{
                int xdif=v[j].first-v[i].first;
                int ydif=v[j].second-v[i].second;
                int g=__gcd(xdif,ydif);
                xdif/=g;
                ydif/=g;
                m[mp(xdif,ydif)]++;
                curmax=max(curmax, m[mp(xdif,ydif)]);
            }
            curmax=max(curmax,verticalpoints);
        }
        maxa=max(maxa,curmax+overlap+1);
        m.clear();
    }
    return maxa;
}
int Solution::maxPoints(vector<int> &a, vector<int> &b) {
    int n=a.size();
    vector<pii> v;
    for(int i=0;i<n;i++){
        pii x=mp(a[i],b[i]);
        v.push_back(x);
    }
    return func(v,n);
    
}
