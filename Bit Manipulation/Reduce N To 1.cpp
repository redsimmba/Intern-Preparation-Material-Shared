
//DP Approach
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int fun(int n, int *dp){
//     if(n==1){
//         return dp[1]=0;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     if(n%2==0){
//         return dp[n]=fun(n>>1,dp)+1;
//     }
//     return dp[n]=min(fun(n-1,dp),fun(n-1,dp))+1;
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     int dp[n+1];
//     // memset(dp,-1,n+1);
//     for(int i=0;i<=n;i++){
//         dp[i]=-1;
//     }
    
//     cout<<fun(n,dp);



//     return 0;
// }

//POSSIBLE SOLUTION
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int fun(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==3){
//         return 2;
//     }
//     int rem=n%4;
//     if(rem==1){
//         return fun(n-1)+1;
//     }
//     else if(rem==2){
//         return fun(n/2)+1;
//     }
//     else if(rem==3){
//         return fun(n+1)+1;
//     }
   
//         return fun(n/2)+1;
//     }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
   
//     cout<<fun(n)<<endl;
   
    



//     return 0;
// }

//FINAL
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int fun(int n){
    if(n==1){
        return 0;
    }
    if(n==3){
        return 2;
    }
    int rem=n&3;
    if(rem==0 || rem==2){
        return fun(n/2)+1;
    }
    else if(rem==3){
        return fun(n+1)+1;
    }
 
   
        return fun(n-1)+1;
    }
    
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
   
    cout<<fun(n)<<endl;
   
    



    return 0;
}