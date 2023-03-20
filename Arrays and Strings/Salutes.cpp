long Solution::countSalutes(string s) {
    int n=s.length();
    int left=0;
    int right=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){// right means open right
            right++;
        }
        else{
            left++;
        }
    }
    long ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='>'){
            ans+=(right);// it will salute to all remaining right <
        }
        else{
            right--;// reduce right count by 1
        }
    }
    return ans;
}
