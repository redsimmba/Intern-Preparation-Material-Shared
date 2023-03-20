//Naive Solution, Very Intuitive, Passes Test Cases. Time is O(sqrt(n)) and Space used is O(k).
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<long long> distributeCandies(int n, int k) {
        vector<long long> v(k,0);
        int i=0;
        int candy_count=n;
        int candy=1;
        while(candy_count>0){
            if(candy>candy_count){
                v[i]+=candy_count;
                break;
            }
            v[i]+=candy;
           
            if(i==k-1){
                i=-1;
            }
           
            candy_count-=candy;
             i++;
             candy++;
            
        }
        return v;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends


//Optimised Code, Involving Binary Search Implementation, O(logn + K)
