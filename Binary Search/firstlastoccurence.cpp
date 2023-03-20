#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    int s=0;
    int e=n-1;
    int first=-1;
    //For first occurence
    while(s<=e){
    	int mid=(s+e)/2;
    	if(v[mid]==k){
    		first=mid;
    		e=mid-1;
    	}
    	else if(v[mid]<k){
    		s=mid+1;
    	}
    	else{
    		e=mid-1;
    	}
    }
    cout<<first<<endl;
    

    //For last occurence
    s=0;
    e=n-1;
    int last=-1;
    while(s<=e){
    	int mid=(s+e)/2;
    	if(v[mid]==k){
    		last=mid;
    		s=mid+1;
    	}
    	else if(v[mid]<k){
    		s=mid+1;
    	}
    	else{
    		e=mid-1;
    	}
    }
    cout<<last<<endl;



	return 0;
}

