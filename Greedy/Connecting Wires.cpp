#include <bits/stdc++.h>
using namespace std;
#define int long long int
int minwire(vector<int> b, vector<int> w, int n){
	int ans=0;
	sort(b.begin(),b.end());
	sort(w.begin(),w.end());
	for(int i=0;i<n;i++){
		ans+=abs(b[i]-w[i]);
	}
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    for(int i=0;i<n;i++){
    	cin>>v2[i];
    }
    cout<<minwire(v1,v2,n);




	return 0;
}

//To traverse a vector
// for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;