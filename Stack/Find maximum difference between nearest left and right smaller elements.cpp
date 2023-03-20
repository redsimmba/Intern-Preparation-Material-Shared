#include<bits/stdc++.h>
#define int long long int
using namespace std;

int maxdifference(vector<int> v){
	int n=v.size();
	//First Calculate Nearest Left Smallest Element
	stack<int> s1;
	s1.push(v[0]);
	vector<int> ans1(n);
	ans1[0]=0;
	for(int i=1;i<n;i++){
		int cur=v[i];
		while(!s1.empty() && cur<=s1.top()){
			s1.pop();
		}
		if(s1.empty()){
			ans1[i]=0;
		}
		else{
			ans1[i]=s1.top();
		}
		s1.push(v[i]);

	}
	// for(int i=0;i<n;i++){
	// 	cout<<ans1[i]<<" ";
	// }
	// cout<<endl;


	//First Calculate Nearest Right Smallest Element
	stack<int> s2;
	s2.push(v[n-1]);
	vector<int> ans2(n);
	ans2[n-1]=0;
	for(int i=n-2;i>=0;i--){
		int cur=v[i];
		while(!s2.empty() && cur<=s2.top()){
			s2.pop();
		}
		if(s2.empty()){
			ans2[i]=0;
		}
		else{
			ans2[i]=s2.top();
		}
		s2.push(v[i]);

	}
	// for(int i=0;i<n;i++){
	// 	cout<<ans2[i]<<" ";
	// }
	// cout<<endl;

	int maxa=INT_MIN;
	for(int i=0;i<n;i++){
		int temp=abs(ans1[i]-ans2[i]);
		maxa=max(temp,maxa);
	}
	return maxa;

}

int32_t main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<maxdifference(v)<<endl;


	return 0;
}