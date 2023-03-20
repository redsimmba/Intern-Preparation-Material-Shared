//Less Intuitive But Better Solution, Here, we simply say if same v[i]-i value has occured, then add it coz every succeeding number will 
// make a required pair with all elements with same v[i]-i preceding it.

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int 
// int fun(vector<int> v, int n){
// 	unordered_map<int,int> m;
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		ans+=m[v[i]-i];
// 		m[v[i]-i]++;

// 	}

// 	return ans;
// }
// int32_t main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		vector<int> v(n);
// 		for(int i=0;i<n;i++){
// 			cin>>v[i];
// 		}
// 		cout<<fun(v,n)<<endl;
// 	}




// 	return 0;
// }


//More Intuitive, if map value of particular v[i]-i reaches 2 or more, then select 2 out of those number to get the answer, nC2 gives relevant pairs.
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
int fun(vector<int> v, int n){
	unordered_map<int,int> m;
	int ans=0;
	for(int i=0;i<n;i++){
		m[v[i]-i]++;

	}
	for(auto i:m){
		if(i.second>1){
			ans+=((i.second-1)*i.second)/2;//n C 2
		}
	}

	return ans;
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		cout<<fun(v,n)<<endl;
	}




	return 0;
}