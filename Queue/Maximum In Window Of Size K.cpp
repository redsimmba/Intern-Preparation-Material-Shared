//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> v, int n, int k) {
        vector<int> ans;
        deque<int> D(k);
        int i=0;
        for(;i<k;i++){
            while(!D.empty() && v[i]>v[D.back()]){// Elements coming before an element and smaller than it are useless.
                D.pop_back();
            }
            D.push_back(i);
        }
        // Process the remaining elements
       
        for(;i<n;i++){
            ans.push_back(v[D.front()]);
            // 1. Remove the elements which are not the part of the window(Contraction), i.e before i-k
            while(!D.empty() && (D.front()<=i-k)){
                D.pop_front();
            }
            
            // 2. Remove the elements which are not useful and are in window, which came before but have a smaller value
            while(!D.empty() &&  v[i]>=v[D.back()]){
                D.pop_back();
            }
            
            // 3. Add the new elements(Expansion), add the element
            D.push_back(i);
            
        }
        ans.push_back(v[D.front()]);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends