
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	cin>>a>>b;
	int n1=a.length();
	int n2=b.length();
	vector<vector<int>> t(n1+1,vector<int> (n2+1,0));// to form the table
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=n2;j++){
			if(a[i-1]==b[j-1]){
				t[i][j]=1+t[i-1][j-1];// if characters match
			}
			else{
				t[i][j]=max(t[i-1][j],t[i][j-1]);// if characters don't match
			}
		}
	}
	string s;
	int i=n1,j=n2;
	while(i>0 && j>0){
		if(a[i-1]==b[j-1]){
			s+=a[i-1];
			i--;
			j--;
		}
		else{
			if(t[i-1][j]>t[i][j-1]){
				i--;
			}
			else{
				j--;
			}
		}
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;


	return 0;
}