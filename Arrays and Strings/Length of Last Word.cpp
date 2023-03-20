int Solution::lengthOfLastWord(const string s) {
    int n=s.length();
    if(n==0){
        return 0;
    }
    int i=n-1;
    while(s[i]==' '){
        i--;
    }
    int ans=0;
    for(;i>=0;i--){
        if(s[i]==' '){
            break;
        }
        ans++;
    }
    return ans;
}
