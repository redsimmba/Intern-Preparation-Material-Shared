string Solution::countAndSay(int n) {
    vector<string> dp(3);// Declare the size here as else for input 1, runtime error happens
    dp[0]="0";
    dp[1]="1";
    dp[2]="11";
    for(int j=3;j<=n;j++){
        string a=dp[j-1];
        int character=a[0];
        int cnt=1;
        int i=1;
        string ans;
        while(i<a.size()){
            if(a[i]==character){
                cnt++;
            }
            else{
                ans+=to_string(cnt);
                ans+=character;
                character=a[i];
                cnt=1;
            }
            i++;
        }
        ans+=to_string(cnt);// For the last occurence 
        ans+=character;
        dp.push_back(ans);
    }
    return dp[n];
}
