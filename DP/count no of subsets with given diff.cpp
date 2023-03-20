// We just need to count the number of subsets with sum =(sum+diff)/2;
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,sum,diff;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int total_sum=accumulate(v.begin(),v.end(),0);
	cin>>diff;
	sum=(total_sum+diff)/2;
	vector<vector<int>> t(n+1,vector<int> (sum+1,0));
	for(int i=0;i<=n;i++){
		t[i][0]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(v[i-1]<=j){
				t[i][j]=t[i-1][j]+t[i-1][j-v[i-1]];
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	cout<<t[n][sum]<<endl;


	return 0;
}