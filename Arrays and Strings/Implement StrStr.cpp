
int Solution::strStr(const string a, const string b) {
    int n=a.length();
    int m=b.length();
    if(m==0){
        return 0;
    }
    if(n==0){
        return -1;
    }
    for(int i=0;i<n;i++){
        int j=0;
        for(;j<m;j++){
            if(a[i+j]==b[j]){
                continue;
            }
            else{
                break;
            }
        }
        if(j==m){
            return i;
        }
    }
    return -1;
}
