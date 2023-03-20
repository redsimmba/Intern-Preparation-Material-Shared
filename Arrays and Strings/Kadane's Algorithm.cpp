//Handles all -ve cases too
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    #define ll long long int 
    long long maxSubarraySum(int a[], int n){
        int ms=a[0];
        int cs=a[0];
        for(int i=1;i<n;i++){
            cs=max(a[i],cs+a[i]);
            ms=max(cs,ms);
        }
        return ms;
        
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends