int Solution::solve(vector<int> &a, vector<int> &b) {
    int n=a.size();
    int time_taken=b[0];
    int cnt=0;
    for(int i=1;i<n;i++){
        a[i]-=time_taken;
        if(a[i]<0){// If patience is exhausted, the person leaves
            cnt++;
        }
        else{
            time_taken+=b[i];// If patience is not exhausted the perosn does not leave and takes processing time to process his ticket
        }
    }
    return cnt;
}
