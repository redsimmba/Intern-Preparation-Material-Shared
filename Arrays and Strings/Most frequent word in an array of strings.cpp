// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string,int> map;
        int maxa=0;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
            if(map[arr[i]]>maxa){
                maxa=map[arr[i]];
            }
        }
        string ans;
        int i=0;
        unordered_map<string,int> m;
        string last;
        for(int i=0;i<n;i++){
            if(map[arr[i]]==maxa){
                if(!m[arr[i]]){
                    m[arr[i]]=1;
                    last=arr[i];
                }
                else{
                    continue;
                }
                ans=arr[i];
            }
        }
        return last;
        
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends