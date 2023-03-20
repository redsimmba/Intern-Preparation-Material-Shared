#include <bits/stdc++.h>
using namespace std;
#define int long long int
void fun(vector<vector<int>> v, int n, int m, int k){
	//Bubble Sort types
	for(int i=0;i<n-2;i++){
		for(int j=0;j<n-1;j++){
			if(v[j][k]>v[j+1][k]){

				swap(v[j][k],v[j+1][k]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}


}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
    	vector<int> x;
    	for(int j=0;j<m;j++){
    		int t;
    		cin>>t;
    		x.push_back(t);

    	}
    	v.push_back(x);
    }
    int k;
    cin>>k;
    fun(v,n,m,k);



	return 0;
}

//To traverse a vector
// for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;