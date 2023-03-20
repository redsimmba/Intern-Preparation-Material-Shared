#include<bits/stdc++.h>
using namespace std;
template<typename T, typename X>// To generalise the stack, instead of just int
//template<typename V>// Can use another variable to represnt a new data type in general
class Stack{
	vector<T> v;
	vector<X> n;
public:
	bool isEmpty(){
		return v.size()==0;
	}
	T top(){
		if(v.size()<1){
			return NULL;
		}
		return v[v.size()-1];
	}
	void push(T data){
		v.push_back(data);
	}
	void pop(){
		if(v.size()<1){
			return;
		}
		v.pop_back();
	}


};
int main(){
	Stack<string,int> s;//stack is ambiguous with standard library inbuilt function
	for(int i=0;i<10;i++){
		s.push("A");
	}

	while(!s.isEmpty()){
		cout<<s.top()<<" ";
		s.pop();
	}



	return 0;
}