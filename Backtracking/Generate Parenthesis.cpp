vector<string> ans;
void func(int open, int close, int n, string s){
    if(open==n && close==n){// If the parenthesis is complete, then return 
        ans.push_back(s);
        return;
    }
    if(open<n){// if the open brackets have not been completed
        func(open+1,close,n,s+"(");
    }
    if(close<open){// We can apply closure brackets only if the no of open brackets is more.
        func(open,close+1,n,s+")");
    }
}
vector<string> Solution::generateParenthesis(int n) {
    ans.clear();// To escape garbage values from the previous test cases
    string s="";
    func(0,0,n,s);
    return ans;
}
