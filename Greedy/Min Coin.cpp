// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		//Brute Force Approach
	// int MinCoin(vector<int> v, int k)
	// {
	//     int n=v.size();
	//     int ans=0;
	//     while(k){
	//         for(int i=n-1;i>=0;i--){
	//             if(v[i]<=k){
	//                 k=k-v[i];
	//                 ans++;
	//                 break;
	//             }
	//         }
	        
	//     }
	//     return ans;
	    
	    
	//     // Code here
	// }

		//Optimised Approach
	int MinCoin(vector<int> v, int k)
	{
	    int n=v.size();
	    int ans=0;
	    while(k){
	        int idx=upper_bound(v.begin(),v.end(),k)-v.begin();//Number just greater than the amount in the coin array by binary search
	        idx=idx-1;//To get to the smaller or equal value in the array
	        cout<<v[idx]<<" + ";
	        k=k-v[idx];
	        ans++;
	    }
	    return ans;
	    
	    
	    // Code here
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends