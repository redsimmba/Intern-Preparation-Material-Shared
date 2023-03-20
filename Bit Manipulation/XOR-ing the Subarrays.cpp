int Solution::solve(vector<int> &v) {
    int n=v.size();
    int ans=1;
    for(int i=0;i<n;i++){
        int temp=(i+1)*(n-i);// No of occurences of the element in all the subarrays
        if(temp%2==1){
            ans=ans^v[i];
        }
    }
    return ans^1;
}
