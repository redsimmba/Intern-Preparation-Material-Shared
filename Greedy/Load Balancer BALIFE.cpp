#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define vector<vector<int>>vv
int balife(vector<int> v, int n){
	int suma=0;
	for(int i=0;i<n;i++){
		suma+=v[i];
	}
	if(suma%n!=0){
		return -1;
	}
	int final=suma/n;
	int cur_sum=0;
	int i=0;
	int maxa=INT_MIN;
	while(i<n){
		cur_sum+=v[i];
		int temp=abs(cur_sum-final*(i+1));
		maxa=max(temp,maxa);
		i++;
	}
	return maxa;
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
    cout<<balife(v,n)<<endl;



	return 0;
}

//To traverse a vector
// for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;