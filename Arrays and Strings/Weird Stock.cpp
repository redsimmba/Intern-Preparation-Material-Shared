#include <bits/stdc++.h>
using namespace std;
int func(int n, int m){
	// make n to m

}
int main(){
	int n,m;
	cin>>n>>m;
	if(n==m){
		cout<<"0"<<endl;
	}
	if(n>m){
		int temp=n-m;
		cout<<temp<endl;
	}
	if(n<m){
		if(m%n==0){
			int temp=(m-n)/n;
			cout<<temp<<endl;
		}
		else{
			int cnt=0;
			while()
		}
	}
	return 0;
}