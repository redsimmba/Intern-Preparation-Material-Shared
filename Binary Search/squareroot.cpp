#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n;
    cin>>n;
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
    	int mid=(s+e)/2;
    	if(mid*mid==n){
    		ans=mid;
    		break;
    	}
    	else if(mid*mid<n){
    		ans=mid;
    		s=mid+1;
    	}
    	else{
    		e=mid-1;
    	}
    }

    //Floating Part
    //Brute Force
    //Check for an addition of 0.1 and 0.01 and so on
    float inc=0.1;
    for(int times=1;times<=3;times++){
    	while(ans*ans<=n){
    		ans=ans+inc;
    	}
  
    	ans=ans-inc;
    	inc=inc/10;
    } 

    //Overall Complexity O(logn + p);
    cout<<ans<<endl;
    



	return 0;
}

   