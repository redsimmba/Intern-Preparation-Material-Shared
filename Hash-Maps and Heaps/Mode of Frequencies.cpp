#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	unordered_map<int,int> m;
    	for(int i=0;i<n;i++){
    		m[v[i]]++;
    	}
    	unordered_map<int,int> m2;
    	int maxa=INT_MIN;
    	for(auto i:m){
    		m2[i.second]++;
    		if(m2[i.second]>maxa){
    			maxa=m2[i.second];
    		}
    	}
    	int mina=INT_MAX;
    	for(auto i: m2){
    		if(i.second==maxa){
    			if(mina>i.first){
    				mina=i.first;
    			}
    		}
    	}
    	cout<<mina<<endl;


    }



	return 0;
}
