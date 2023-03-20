#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int> &s, int x){
	//If stack is empty
	if(s.empty()){
		s.push(x);
		return;
	}
	//Otherwise 
	int data=s.top();
	s.pop();
	insertatbottom(s,x);
	s.push(data);

}
void reverse(stack<int> &s){
	//Base Case
	if(s.empty()){
		return;
	}

	//otherwise pop out the top element and insert it at the bottom of ' reversed smaller stack'
	int x=s.top();
	s.pop();


	//Recursive Case
	reverse(s);
	insertatbottom(s,x);

	    
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