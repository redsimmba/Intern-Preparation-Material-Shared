vector<string> Solution::deserialize(string s) {
    vector<string> ans;
    string t;
    int i=0;
    while(i<s.length()){
        if(s[i]>='0' && s[i]<='9'){// If we encounter the size part, i++ till ~ happens, then one final i++
            ans.push_back(t);
            t.clear();// Clear the string t
            while(s[i]!='~'){
                i++;
            }
        }
        else{
            t=t+s[i];// Making strings
        }
        i++;
        
    }
    return ans;
}
