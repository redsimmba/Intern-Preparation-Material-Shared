//Own thought approach to handle series of blank spaces.

bool test(char x){
    if(x>='a' && x<='z'){
            return true;
    }
        return false;
}

int Solution::solve(string s) {
    int n=s.length();
    vector<string> v;
    if(n==0){
        return 0;
    }
    int ans=1;
    int i=0;
    while(i<n){
        char x=s[i];
        if(test(x)){
            string p;
            while(s[i]!=' ' && i<n){
                p=p+s[i];
                i++;
            }
            v.push_back(p);
        }
        else{
            i++;
        }
        
    }
    return v.size();

}
