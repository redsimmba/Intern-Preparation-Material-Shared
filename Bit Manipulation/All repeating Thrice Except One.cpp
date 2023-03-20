 int singleElement(int a[] ,int n) {
        vector<int> v(32,0);
        for(int i=0;i<n;i++){
            bitset<32> b(a[i]);
            for(int j=0;j<32;j++){
                if(b[j]==1){
                    v[j]++;
                }
            }
        }
        bitset<32> ans(0);
        for(int i=0;i<32;i++){
            int cnt=v[i];
            if(cnt==0){
                ans[i]=0;
            }
            if(cnt%3==1){
                ans[i]=1;
            }
        }
        return ans.to_ulong();
    }