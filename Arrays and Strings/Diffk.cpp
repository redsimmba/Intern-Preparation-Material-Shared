// Naive O(nlogn) solution, first try, NOT using maps
int Solution::diffPossible(vector<int> &v, int k) {
    int n=v.size();
    for(int i=0;i<n;i++){
        int key=v[i]+k;
        int s=i+1;// search after the current element
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(v[mid]>key){
                e=mid-1;
            }
            else if(v[mid]<key){
                s=mid+1;
            }
            else{
                return 1;
            }
        }
    }
    return 0;
}


// Two Pointers, O(n) approach
int Solution::diffPossible(vector<int> &v, int k) {
    int n=v.size();
    int i=0;
    int j=1;
    while(i<n && j<n){
        if(i!=j && v[j]-v[i]==k){
            return 1;
        }
        else if(v[j]-v[i]>k){// if difference is too large, bring i closer
            i++;
        }
        else{
            j++;// else take j farther
        }
    }
    return 0;
}

