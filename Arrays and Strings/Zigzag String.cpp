string Solution::convert(string s, int b) {
    if(b==1){
        return s;// If b==1, no need for any computation
    }
    int n=s.length();
    vector<int> v(n,0);// vector to store the assigned zig zag value to each index.
    int i=1;
    int grow=0;
    for(int j=0;j<n;j++){
        v[j]=i;
        if(grow==0){//If grow is 0 means we are on a rising curve
            i++;
        }
        if(grow==1){// If grow is 1 means we are on a falling curve
            i--;
        }
        if(i==1){// if we reach 1, we make curve increasing
            grow=0;
        }
        if(i==b){// if we reach b, we make curve falling
            grow=1;
        }
    }
    vector<string> ans(b+1);// To store the seperate strings with each zig zag value (1 to B) and (B to 1);
    for(int j=0;j<n;j++){
        int no=v[j];
        ans[no]+=s[j];
    }
    string huh;
    for(int j=1;j<=b;j++){
        huh+=ans[j];// Finally Concatenating them, with zig zag value 1,2 ... B.
    }
    return huh;// Final String
}
