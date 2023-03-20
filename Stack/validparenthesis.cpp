#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		if(ch=='('){
			st.push(ch);
		}
		else if(ch==')'){
			if(st.top()!='(' or st.empty()){
				return false;
			}
			st.pop();
		}
	}
	return true;
}
int main(){
	 string s;
	 cin>>s;
	 cout<<isValid(s)<<endl;




	return 0;
}