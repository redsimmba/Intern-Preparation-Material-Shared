#include<bits/stdc++.h>
#define int long long int
using namespace std;

//This gives GRETAEST ELEMENT ON THE RIGHT, not the next greatest element
void nextgreateronright1(vector<int> v, int n){
	vector<int> ans(n);
	ans[n-1]=-1;
	int maxa=v[n-1];
	for(int i=n-2;i>=0;i--){
		if(v[i]>=maxa){
			ans[i]=-1;
			maxa=v[i];
		}
		else{
			ans[i]=maxa;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

void nextgreateronright2(vector<int> v){
	int n=v.size();
	stack<int> s;
	s.push(v[n-1]);
	vector<int> ans(n);
	ans[n-1]=-1;
	for(int i=n-2;i>=0;i--){
		int cur=v[i];
		while(!s.empty() && cur>=s.top()){
			s.pop();
		}
		if(s.empty()){
			ans[i]=-1;
		}
		else{
			ans[i]=s.top();
		}
		s.push(v[i]);
	}

	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;



}


int32_t main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	nextgreateronright1(v,n);
	nextgreateronright2(v);


	return 0;
}