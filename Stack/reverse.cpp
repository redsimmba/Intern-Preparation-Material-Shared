#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int> & a, stack<int> & b, int n){
	for(int i=0;i<n;i++){
		b.push(a.top());
		a.pop();
	}

}
void reverse(stack<int> &s){
	stack<int> t;
	int n=s.size();
	for(auto i=0;i<n;i++){
		//Pick the element at top and insert it at the bottom
		int x=s.top();
		s.pop();
		//transfer n-i-1 elements from stack s to t;
		transfer(s,t,n-i-1);
		// insert the element x in s;
		s.push(x);
		// transfer n-i-1 elements from t to s;
		transfer(t,s,n-i-1);
	}
}
int main(){
	 stack<int> s;
	 int n;
	 cin>>n;
	 for(int i=0;i<n;i++){
	 	int no;
	 	cin>>no;
	 	s.push(no);
	 }
	 reverse(s);
	 while(!s.empty()){
	 	cout<<s.top()<<" ";
	 	s.pop();
	 }




	return 0;
}