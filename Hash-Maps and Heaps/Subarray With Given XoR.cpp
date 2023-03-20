int Solution::solve(vector<int> &v, int b) {
    int n=v.size();
    map<int,int> m;
    int cnt=0;
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^v[i];
        if(xorr==b){
            cnt++;
        }
        if(m.find(xorr^b)!=m.end()){// xorr^b^xorr=b
            cnt+=m[xorr^b];
        }
        m[xorr]++;
    }
    return cnt;
}
