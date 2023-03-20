// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long v[], long long n) {
            // Your code here
        priority_queue<long long int, vector<long long int>, greater<long long int>> q;
        long long  int ans=0;
        for(int i=0;i<n;i++){
            q.push(v[i]);
        }
        while(!q.empty()){
            if(q.size()==1){// if single element left
                return ans;
            }
            long long int a=q.top();
            q.pop();
            if(q.empty()){// if queue gets empty, then return 
                ans+=a;
                return ans;
            }
            long long int b=q.top();
            q.pop();
            ans+=(a+b);
            q.push(a+b);// push the comibed rope
        }
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends