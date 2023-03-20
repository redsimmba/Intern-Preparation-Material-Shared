#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    for(int i=0;i<n;i++){
    	if(v[i]==0){
    		v[i]=-1;
    	}
    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
    	if(i==0){
    		m[i]=v[i];
    	}
    	m[i]=m[i-1]+v[i];
    }
    int ans=0;
    for(auto i: m){
    	if(i.second==0){
    		ans++;
    	}
    }
    




	return 0;
}
