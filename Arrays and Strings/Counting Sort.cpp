 string countSort(string s){
        vector<int> v(26,0);
        int n=s.length();
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        for(int i=1;i<26;i++){
            v[i]=v[i-1]+v[i];
        }
        string a(n,' ');
        for(int i=n-1;i>=0;i--){
            a[v[s[i]-'a']-1]=s[i];
            v[s[i]-'a']--;
        }
        return a;
    }