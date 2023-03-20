bool ispalin(string &s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int func(string &s, int i, int j, vector<vector<int>> &t){
    if(i>=j){
        return 0;
    }
    if(ispalin(s,i,j)){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int maxa=j-i+1;
    for(int k=i;k<j;k++){
        int temp=1+func(s,i,k,t)+func(s,k+1,j,t);
        if(temp<maxa){
            maxa=temp;
        }
    }
    return t[i][j]=maxa;
}

int Solution::minCut(string s) {
    int n=s.length();
    vector<vector<int>> t(n+1,vector<int> (n+1,-1));
    return func(s,0,n-1,t);
}
