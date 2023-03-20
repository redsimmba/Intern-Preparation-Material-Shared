string Solution::solve(string a, int b) {
    stack<char> s;// TO store/remove charaters to form the final string
    int n=a.length();
    int cnt=1;
    s.push(a[0]);
    int i=1;
    while(i<n){
        if(a[i]==s.top()){//If it matches the top, then just keep on pushing (>b is not our concern)
            cnt++;
            s.push(a[i]);
        }
        else{
            if(cnt==b){
                char x=s.top();
                while(!s.empty() && s.top()==x){//Pop b times to remove the character from the string
                    s.pop();
                }
            } 
            s.push(a[i]);//The new character is added, after all the b pops are done
            
             cnt=1;
        }
        i++;
    }
    if(cnt==b){// If the last b charcters are the same, then we need another loop in the end. Ex- aaabccc,3 -> b
        char x=s.top();
        while(!s.empty() && s.top()==x){
            s.pop();
        }
    } 
    string ans;
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}