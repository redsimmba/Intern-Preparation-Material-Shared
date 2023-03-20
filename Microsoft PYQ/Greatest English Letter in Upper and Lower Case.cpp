string greatestLetter(string s) {
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<int> cand;
        for(int i=0;i<n;i++){
            char x=s[i];
            if(x>='a' && x<='z'){
                char y=x-32;
                if(m[y]>0){
                    cand.push_back(y);
                }
                m[y]=0;
                m[x]=0;
            }
            else{
                char y=x+32;
                if(m[y]>0){
                    cand.push_back(x);
                }
                m[x]=0;
                m[y]=0;
            }
        }
        string t;
        if(cand.size()==0){
            return t;
        }
        sort(cand.begin(),cand.end());
        char x=cand[cand.size()-1];
        t=t+x;
        return t;
        
    }