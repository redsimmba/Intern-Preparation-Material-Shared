// FAST Solution using stack. 



int Solution::solve(string s) {
    stack<char> st;
    int n=s.length();
    st.push(s[0]);
    for(int i=1;i<n;i++){
        
        if(!st.empty()){
            if(st.top()=='(' && s[i]==')'){// If we encounter a pair of braces, we pop the one present and revert control back to for loop.
                st.pop();
                continue;
            }
        }
        st.push(s[i]);//Push only if no pair is formed with the top element.
    }
    return st.size();// Remaining elements in the stack are giving imabalance, thus equal no of braces are needed.
}


//Constant Space Solution

int Solution::solve(string s) {
    int left=0;// '(' count
    int extra_cnt=0;// The unbalanced ')' count
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            left++;
        }
        else{
            if(left==0){// If all rights come, then add extra
                extra_cnt++;
            }
            else{
                left--;// else pop the left
            }
        }
    }
    return extra_cnt+left;// extra left plus unbalanced right is the answer
}

