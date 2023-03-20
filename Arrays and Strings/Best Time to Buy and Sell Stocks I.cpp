int Solution::maxProfit(const vector<int> &v) {
    int n=v.size();
    if(n<=1){// if elements is <=1, we get 0 profit
        return 0;
    }
    vector<int> suf(n,0);// suffix array to maintain max element form the backside
    suf[n-1]=v[n-1];
    int j=n-2;
    while(j>=0){
        if(v[j]>suf[j+1]){
            suf[j]=v[j];// max element until then
        }
        else{
            suf[j]=suf[j+1];
        }
        j--;
    }
    int maxa=0;
    for(int i=0;i<n-1;i++){
        int temp=suf[i+1]-v[i];// max difference i.e. profit
        if(temp>maxa){
            maxa=temp;
        }
    }
    return maxa;
}
