 void dfs(vector<int>&ans, map<int,bool> &visit, vector<int> adj[], int src){
        visit[src]=1;
        ans.push_back(src);
        for(auto i: adj[src]){
            if(!visit[i]){
                dfs(ans,visit,adj,i);
            }
        }
        return;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        map<int,bool> visit;
        dfs(ans,visit,adj,0);
        
        return ans;
        
    }