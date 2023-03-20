 int getCount(int n) {
        int i=0;
        int cnt=0;
        for(long long l=1;l*(l+1)<2*n;l++){
            double a=(1.0*n-((l*(l+1))/2))/(l+1);// if this is an integer
            if(a-int(a)==0.0){
                cnt++;
            }
        }
        return cnt;
    }