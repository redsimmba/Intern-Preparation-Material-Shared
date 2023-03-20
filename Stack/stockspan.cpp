//O(n) time complexity

#include<bits/stdc++.h>
using namespace std;
void stockspanoptimise(vector<int> v, int n){
	//int n=v.size();
	stack<int> s;// stack to store the indices
	s.push(0);
	vector<int> ans(n);
	ans[0]=1;
	for(int i=1;i<n;i++){
		//we find span[i] i.e. ans[i] for each day
		//Find topmost elemt higher than current price
		int cur_price=v[i];
		while(!s.empty() and v[s.top()]<=cur_price){
			s.pop();
		}
		if(!s.empty()){
			int prev_highest=s.top();
			ans[i]=i-prev_highest;
	    }
	    else{
	    	ans[i]=i+1;

	    }

	    //Push this element in the stack
	    s.push(i);

	}

	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}

    cout<<endl;

}
int main(){
	
	int n;
	cin>>n;
	vector<int> v(n);//Stock prices array
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	stockspanoptimise(v,n);
	




	return 0;
}