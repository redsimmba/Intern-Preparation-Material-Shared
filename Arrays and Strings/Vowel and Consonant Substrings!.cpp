

int Solution::solve(string s) {
    long mod=1000000007;
    unordered_map<char,bool> map;
    map['a']=1;
    map['e']=1;
    map['i']=1;
    map['o']=1;
    map['u']=1;
    int n=s.length();
    vector<int> vo;//vowels indices
    vector<int> con;//consonants indices
    for(int i=0;i<n;i++){
        if(map[s[i]]==1){
            vo.push_back(i);
        }
        else{
            con.push_back(i);
        }
    }
    int a=vo.size();
    int b=con.size();
    if(a==0 || b==0){
        return 0;
    }
    long ans=0;
    ans+=(a*b);// Total Number of mapping from one set to another is the answer, a*b simply;
    return ans%mod;
    
}
