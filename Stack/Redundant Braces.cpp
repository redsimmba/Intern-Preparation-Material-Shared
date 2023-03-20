int Solution::braces(string s) {
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        char x=s[i];
        if(x==')'){
            int temp=0;
            while(!st.empty() && st.top()!='('){
                char y=st.top();
                if(y=='+' or y=='-' or y=='*' or y=='/'){
                    temp=1;
                }
                st.pop();
            }
            st.pop();
            if(temp==0){
                return 1;
            }
            
        }
        else{
            st.push(x);
        }
    }
    return 0;
}


// push if not )
// if ) is encountered, start popping until you find (, keep a check that atleast one of +-/* should have occured in the popping
// if no occurs, then redundant exists
// else no