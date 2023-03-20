//Brute Force O(nlogn)
// { Driver Code Starts
//Initial Template for C++

// #include <bits/stdc++.h> 
// using namespace std; 

//  // } Driver Code Ends
// //User function Template for C++
// #define ll long long int

// class Solution{
    
//     public:
//     long long ValidPair(int a[], int n) 
//     { 
//         sort(a,a+n);
//         int j=n-1;
//         int ans=0;
//         while(j!=1){
//         int fir_ind=j;
//         int i=0;
//         while(i<j){
//             if(a[i]+a[j]>0){
//                 fir_ind=i;
//                 break;
//             }
//             i++;
//         }
        
//         ans+=j-fir_ind;
        
//         j--;
//         }
//         return ans;
        
//     	// Your code goes here 
//     }   
// };

// // { Driver Code Starts.

// int main() 
// { 
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int array[n];
// 		for (int i = 0; i < n; ++i)
// 			cin>>array[i];
// 	    Solution obj;
// 		cout << obj.ValidPair(array, n) <<"\n";
// 	}
// 	return 0; 
// } 

  // } Driver Code Ends


  //Optimised Code, in a single traversal



// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
#define ll long long int

class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
        sort(a,a+n);
        ll ans=0;
        ll i=0;
        ll j=n-1;
        while(i<j){
            if(a[i]+a[j]>0){
                ans+=(j-i);
                j--;
            }
             else{
            i++;
        }
            
        }
       return ans;
        
    	// Your code goes here 
    }   
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends

