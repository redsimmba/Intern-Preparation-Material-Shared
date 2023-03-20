#include <bits/stdc++.h>
using namespace std;
#define int long long int
int maxa(vector<int> v, int n){
	int cur_max=0;
	int glo_max=0;
	for(int i=0;i<n;i++){
		if(v[i]==1){
			cur_max++;
			if(cur_max>glo_max){
				glo_max=cur_max;
			}
		}
		else{
			cur_max=0;
		}
	}
	return glo_max;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    cout<<maxa(v,n)<<endl;



	return 0;
}

//To traverse a vector
// for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;