vector<int> Solution::allFactors(int n) {
    if(n==1){
         vector<int> v;
         v.push_back(1);
        return v;
    }
    int x=sqrt(n);
    vector<int> v;
    for(int i=1;i<=x;i++){
        if(n%i==0){
            if(i==n/i){
                v.push_back(i);// to prevent square root from pushing twice
            }
            else{
            v.push_back(i);
            v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}
