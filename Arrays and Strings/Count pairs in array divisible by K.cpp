//Nice Approach, No maps used, Array used instead.
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int a[], int n, int K)
    {
        vector<long long int> v(K,0);
        for(int i=0;i<n;i++){
            long long int temp=a[i]%K;
            v[temp]++;
        }
       
        long long int i=1;
        long long int j=K-1;
        long long int ans=0;
        ans+=(v[0]*(v[0]-1))/2;
        while(i<j){
            ans+=v[i]*v[j];
            i++;
            j--;
        }
        if(K%2==0){
            //cout<<"In"<<endl;
            long long int t=v[K/2];
            ans+=(t*(t-1))/2;
        }
        return ans;
        
        
        //code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends