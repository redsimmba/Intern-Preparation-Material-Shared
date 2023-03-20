// Memoisation Solution
 int func(vector<int> & v, int sum, int i, int n, vector<vector<int>> &t){
    if(sum==0){
        return 0;
    }
    if(sum<0){
        return INT_MAX-50;// Just output minimum when we add something to it
    }
    if(i>=n){
        return INT_MAX-50;
    }
    if(t[sum][i]!=-1){
        return t[sum][i];
    }
    // long long int cnt=0;
    long long cand1=1+func(v,sum-v[i],i,n,t);
    long long cand2=func(v,sum,i+1,n,t);
    return t[sum][i]=min(cand1,cand2);
    
}
    int coinChange(vector<int>& v, int sum) {
          int n=v.size();
    vector<vector<int>> t(sum+1,vector<int> (n+1,-1));
    int x=func(v,sum,0,n,t);
        if(x>INT_MAX-1000){// If no combination is possible, and ans comes out near INT_MAX
            return -1;
        }
        return x;
        
    }

// Bottom Up DP Solution
 int coinChange(vector<int>& v, int sum) {
        int n=v.size();
        vector<vector<long long int>> t(n+1,vector<long long int> (sum+1,0));
        for(int i=1;i<=sum;i++){
            t[0][i]=INT_MAX-100;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(v[i-1]<=j){
                    int cand1=1+t[i][j-v[i-1]];// If we include the coin
                    int cand2=t[i-1][j];
                    t[i][j]=min(cand1,cand2);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        long long int x=t[n][sum];
        if(x>INT_MAX-1000){
            return -1;
        }
        return x;
        
        
    }

    // SPACE OPTIMISED SOLUTION
    class Solution {
public:
    int coinChange(vector<int>& v, int sum) {
        int n=v.size();
        // vector<vector<long long int>> t(n+1,vector<long long int> (sum+1,0));
        vector<int> t(sum+1,0);// to get t[0]=0;
        for(int i=1;i<=sum;i++){// maxm for any position can be amount+1;
            t[i]=sum+1;
        }
        // for(int i=1;i<=sum;i++){
        //     t[0][i]=INT_MAX-100;
        // }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(v[i-1]<=j){
                    int cand1=1+t[j-v[i-1]];
                    int cand2=t[j];
                    t[j]=min(cand1,cand2);
                }
            }
        }
        long long int x=t[sum];
        if(x==sum+1){// If that maxm is obtained, that means no way is possible
            return -1;
        }
        return x;
        
        
    }
};

// another
class Solution {
public:
    int coinChange(vector<int>& v, int sum) {
        int n=v.size();
        // vector<vector<long long int>> t(n+1,vector<long long int> (sum+1,0));
        vector<int> t(sum+1,0);
        for(int i=1;i<=sum;i++){
            t[i]=INT_MAX-50;// Take very large number ot initialise that array
        }
        // for(int i=1;i<=sum;i++){
        //     t[0][i]=INT_MAX-100;
        // }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(v[i-1]<=j){
                    int cand1=1+t[j-v[i-1]];
                    int cand2=t[j];
                    t[j]=min(cand1,cand2);
                }
            }
        }
        long long int x=t[sum];
        if(x>=INT_MAX-1000){// if large no remains, we return -1;
            return -1;
        }
        return x;
        
        
    }
};