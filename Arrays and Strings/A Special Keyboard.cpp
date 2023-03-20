// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string s1, string s2) {
        unordered_map<char,int> map;
        for(int i=0;i<26;i++){
            map[s1[i]]=i;
        }
        int pt=0;
        int ans=0;
        for(int i=0;i<s2.length();i++){
            ans+=abs(map[s2[i]]-pt);
            pt=map[s2[i]];
        }
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends