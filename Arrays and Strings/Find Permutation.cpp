vector<int> Solution::findPerm(const string s, int n) {
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;// Populate the array with index + 1
    }
    int i=0;// pointer for the string
    vector<int> x;
    int a=0;// From the front
    int b=n-1;// From the back
    for(int j=0;j<n;j++){
        if(s[i]=='D'){
            x.push_back(v[b]);
            b--;
        }
        else{
            x.push_back(v[a]);// For the last i.e. (n-1) index, this loop is played, and the only unused no is pushed to output array
            a++;
        }
        i++;
    }
    
    return x;
}
