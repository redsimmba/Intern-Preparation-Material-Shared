// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int check(int mid, int* v, int n, int k){
        int wood_collected=0;
        for(int i=n-1;i>=0;i--){
          if(v[i]<=mid){
              break;
          }
          wood_collected+=(v[i]-mid);
        }
       // cout<<wood_collected<<endl;
        return wood_collected;
    }
    int find_height(int v[], int n, int k)
    {
       
        sort(v,v+n);
         int maxa=v[n-1];
        int s=0;
        int e=maxa;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(mid,v,n,k)==k){
                return mid;
            }
            else if(check(mid,v,n,k)>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
        // code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}  // } Driver Code Ends