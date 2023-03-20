#include<bits/stdc++.h>
using namespace std;
template<typename T>
void addedge(T x, T y, map<T,vector<T>>&g){
	g[x].push_back(y);
	g[y].push_back(x);
}
void bfs(T src,map<T,vector<T>> g){
	map<T,int> visited;// not bool., as it is now storing the distance
	queue<T> q;
	q.push(src);
	
	// all other nodes will have int_max 
	for(auto node_pair:g){
		T node=node_pair.first;
		visited[node]=INT_MAX;
	}
	visited[src]=0;
	while(!q.empty()){
		T node=q.front();
		q.pop();
		// cout<<node<<" ";
		for(auto nbr: g[node]){
			if(visited[nbr]==INT_MAX){
				q.push(nbr);
				//mark as visited
				visited[nbr]=visited[node]+1;
			}
		}
	}
	for(auto i: visited){
		cout<<i.first<<" "<<i.second<<" "<<endl;
	}

}
int main(){
	map<int,vector<int>> g;// graph
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		addedge(a,b,g);
	}
	bfs(0,g);


}