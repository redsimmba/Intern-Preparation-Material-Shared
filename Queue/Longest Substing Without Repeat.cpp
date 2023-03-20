int Solution::lengthOfLongestSubstring(string s) {
    int n=s.length();
    int curr_len=1;
    int max_len=1;
    vector<int> visit(256,-1);// To se if an element has been visited or no
    visit[s[0]]=0;// Index of last occurence of this element
    for(int i=1;i<n;i++){
        int last_occ=visit[s[i]];// last occurence of the current element
        if(last_occ==-1 || i-curr_len>last_occ){// If element has not occured(-1) or its occurence was before our current length window
            curr_len++;
            max_len=max(max_len,curr_len);
        }
        else{
             if(curr_len>max_len){
                max_len=curr_len;
            }
            curr_len=i-last_occ;// If element occurs in window, then we cut the window at its last occurence
           
        }
        visit[s[i]]=i;// last occurence update
    }
    return max_len;
}
