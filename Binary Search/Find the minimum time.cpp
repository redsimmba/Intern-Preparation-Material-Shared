//Simple Monotonic Search Space Implementation, O(logn) time, no extra space, min time is taken as 0, max as max(s1,s2)*n for the serach space.


// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool check(int min, int n, int s1, int s2){
    int docs_scanned=(min/s1)+(min/s2);
    if(docs_scanned>=n){
        return true;
    }
    return false;
}
    int minTime(int s1, int s2, int N){
        // code here
        int s=0;
        int e=max(s1,s2)*N;
        int ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(mid,N,s1,s2)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S1, S2, N;
        cin>>S1>>S2>>N;
        
        Solution ob;
        cout<<ob.minTime(S1, S2, N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends