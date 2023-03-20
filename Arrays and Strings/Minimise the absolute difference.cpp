int Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i=a.size()-1, j=b.size()-1, k=c.size()-1;
    int ans=INT_MAX;
    while(i!=-1 and j!=-1 and k!=-1){
        int current=max(a[i],max(b[j],c[k]))-min(a[i],min(b[j],c[k]));
        if(ans>current){
            ans=current;
        }
        int maxa=max(a[i],max(b[j],c[k]));
        if(maxa==a[i]){
            i--;
        }
        else if(maxa==b[j]){
            j--;
        }
        else{
            k--;
        }
    }
    return ans;
}


/// VVVV IMP, same for array 3 pointers