#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list<pair<int,int>> l;
public:
	graph(int v){
		this->v=v;
	}
	int addedge(int u, int v){
		l.push_back(make_pair(u,v));
	}
	// DSU Functions
	// Find
	int findset(int i, vector<int> &set){
		// base case
		if(set[i]==-1){
			return i;
		}
		return findset(set[i],set);
	}
	void union_set(int x,int y, vector<int> &set){
		int s1=findset(x,set);
		int s2=findset(y,set);
		if(s1!=s2){
			set[s2]=s1;
		}
	}
	bool contains_cycle(){
		// DSU Logic to check if graph contains a cycle or no
		vector<int> set(v+1,-1);
		// iterate over edge list
		for(auto edge:l){
			int i=edge.first;
			int j=edge.second;
			int s1=findset(i,set);
			int s2=findset(i,set);
			if(s1!=s2){
				union_set(s1,s2,set);
			}
			else{
				cout<<"Same Parents"<<s1<<" and "<<s2<<endl;
				return true;
			}
		}
		return false;
	}
};
int main(){
	int n;
	cin>>n;
	int e;
	cin>>e;
	graph g(n);
	while(e--){
		int x,y;
		cin>>x>>y;
		g.addedge(x,y);
	}
	cout<<g.contains_cycle()<<endl;


	return 0;
}