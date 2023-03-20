int Solution::diffPossible(const vector<int> &v, int b) {
    map<int,int> m;// To store values of the array and their count
    int n=v.size();
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(int i=0;i<n;i++){
        m[v[i]]--;// Reduce the current value's occurence by 1, to ensure k=0 case does not interfere
        if(m[v[i]+b]>0){// if condition is fulfilled
            return 1;
        }
        m[v[i]]++;// if not fulfilled, then revert back the value's occurences to its previous value
    }
    return 0;
}
