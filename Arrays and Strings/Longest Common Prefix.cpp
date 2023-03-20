string Solution::longestCommonPrefix(vector<string> &v) {
    if(v.size()==1){// If the no of stirngs is 1, the below loop will go in infinite loop, so we put a condition here
        return v[0];
    }
    string a=v[0];
    string ans;
    int j=0;//element to be compared
    while(j>-1){
        for(int i=0;i<v.size()-1;i++){
            if(v[i][j]!=v[i+1][j]){// We are comparing j indexed character in string i and i+1.
                return ans;// If condition breaks, we output the stirng.
            }
        }
        ans+=v[0][j];// Add the character to the answer string
        j++;
    }
    return NULL;// Never reaches here
    
}
