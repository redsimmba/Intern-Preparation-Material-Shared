//Memoisation DP solution


// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int t[1000][1000];
    bool func(vector<int> v, int n, int w){// n and w change for every call
	//Base Case
	if(w==0){
		return 1;
	}
	if(n==0){
	    return 0;
	}
	if(t[n][w]!=-1){
		return t[n][w];
	}
	//recursive code
	bool cand1,cand2;
	if(v[n-1]<=w){
		cand1=func(v,n-1,w-v[n-1]);
		cand2=func(v,n-1,w);
		return t[n][w]=cand1|cand2;
	}
	return t[n][w]=func(v,n-1,w);
    }
    bool isSubsetSum(vector<int>v, int target){
        // code here 
        memset(t,-1,sizeof(t));
    	int n=v.size();
    	return func(v,n,target);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends


//Bottom Up Solution DP


// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool isSubsetSum(vector<int>v, int target){
        // code here 
        int n=v.size();
        bool t[n+1][target+1];
        memset(t,0,sizeof(t));
         for(int i=0;i<=target;i++){
            t[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            t[i][0]=1;// 1 for weight 0, after coz we need to have t[0][0] as 1
        }
       
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(v[i-1]<=j){
                    bool cand1=t[i-1][j-v[i-1]];
                    bool cand2=t[i-1][j];
                    t[i][j]=cand1|cand2;
                }
                else{
                    t[i][j]=t[i-1][j];
                }
                
            }
        }
        return t[n][target];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends