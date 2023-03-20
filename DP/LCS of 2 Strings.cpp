// Recursive Solution

// #include<bits/stdc++.h>
// using namespace std;
// int lcs(string a, string b, int n1, int n2){
// 	if(n1==0 || n2==0){
// 		return 0;
// 	}
// 	if(a[n1-1]==b[n2-1]){
// 		return 1+lcs(a,b,n1-1,n2-1);
// 	}
// 	int cand1=lcs(a,b,n1,n2-1);
// 	int cand2=lcs(a,b,n1-1,n2);
// 	return max(cand2,cand1);
// }
// int main(){
// 	string a;
// 	string b;
// 	cin>>a>>b;
// 	int n1=a.length();
// 	int n2=b.length();
// 	cout<< lcs(a,b,n1,n2) <<endl;



// 	return 0;
// }

// Memoised Solution

// #include<bits/stdc++.h>
// using namespace std;
// int lcs(string a, string b, int n1, int n2, vector<vector<int>>&t){
// 	if(n1==0 || n2==0){
// 		return 0;
// 	}
// 	if(t[n1][n2]!=-1){
// 		return t[n1][n2];
// 	}
// 	if(a[n1-1]==b[n2-1]){
// 		return t[n1][n2]=1+lcs(a,b,n1-1,n2-1,t);
// 	}
// 	int cand1=lcs(a,b,n1,n2-1,t);// exclude element from a
// 	int cand2=lcs(a,b,n1-1,n2,t);// exclude element from b
// 	return t[n1][n2]=max(cand2,cand1);
// }
// int main(){
// 	string a;
// 	string b;
// 	cin>>a>>b;
// 	int n1=a.length();
// 	int n2=b.length();
// 	vector<vector<int>> t(n1+1,vector<int> (n2+1,-1));
// 	cout<< lcs(a,b,n1,n2,t) <<endl;



// 	return 0;
// }

// Bottom Up DP code
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string a;
// 	string b;
// 	cin>>a>>b;
// 	int n1=a.length();
// 	int n2=b.length();
// 	vector<vector<int>> t(n1+1,vector<int> (n2+1,0));
// 	for(int i=1;i<=n1;i++){
// 		for(int j=1;j<=n2;j++){
// 			if(a[i-1]==b[j-1]){
// 				t[i][j]=1+t[i-1][j-1];// if characters match
// 			}
// 			else{
// 				t[i][j]=max(t[i-1][j],t[i][j-1]);// if characters don't match
// 			}
// 		}
// 	}
// 	cout<<t[n1][n2]<<endl;


// 	return 0;
// }

// Space Optimised Solution
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	cin>>a>>b;
	int n1=a.length();
	int n2=b.length();
	vector<int> 

	return 0;
}
