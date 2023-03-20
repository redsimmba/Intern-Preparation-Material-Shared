// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    string getSmallest(long long n) {
       
        if(n<9){
            return to_string(n);
        }
        vector<int> v;
      
            for(int i=9;i>1;i--){
                while(n%i==0){
                    v.push_back(i);
                    n=n/i;
                    
                }
            }
            if(n>10){
                return "-1";
            }
            string s="";
           for(int i=v.size()-1;i>=0;i--){
               s.append(to_string(v[i]));
           }
           return s;
           
            
        
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.getSmallest(N) << endl;
    }
    return 0;
}  // } Driver Code Ends