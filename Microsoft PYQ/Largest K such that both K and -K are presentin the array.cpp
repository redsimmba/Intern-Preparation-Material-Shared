#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int l,r;
	cin>>l>>r;
	map<int,int> m;
	for(int i=0;i<n;i++){
		m[v[i]]++;
	}
	vector<int> cand;// to store potential candidates for the answer
	for(int i=0;i<n;i++){
		if(m[-v[i]]>0){
			cand.push_back(v[i]);
			m[v[i]]=0;
			m[-v[i]]=0;
		}
	}
	int maxa=0;
	for(int i=0;i<cand.size();i++){
		if(cand[i]>maxa && (cand[i]>=l and cand[i]<=r)){
			maxa=cand[i];
		}
	}
	cout<<maxa<<endl;


	return 0;
}