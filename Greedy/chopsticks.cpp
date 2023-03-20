#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    int cur=0;
    while(cur<n-1){
    	if(v[cur+1]-v[cur]<=d){
    		ans++;
    		cur=cur+2;
    	}
    	else{
    		cur++;
    	}
    }
    cout<<ans<<endl;



	return 0;
}

