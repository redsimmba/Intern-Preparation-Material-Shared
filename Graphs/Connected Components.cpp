 void dfs(map<int,bool> &visit, map<int,vector<int>> &g, int src){
        visit[src]=1;
        // ans.push_back(src);
        for(auto i: g[src]){
            if(!visit[i]){
                dfs(visit,g,i);
            }
        }
        return;
    }

int Solution::solve(int A, vector<vector<int> > &b) {
    map<int,vector<int>> g;
    for(int i=1;i<=A;i++){// to insert all values of vertices in the graph
        g[i].push_back(0);
        g[i].pop_back();
    }
    for(int i=0;i<b.size();i++){
        g[b[i][0]].push_back(b[i][1]);
        g[b[i][1]].push_back(b[i][0]);
    }
     map<int,bool> visit;
     int cnt=0;
     for(auto i: g){// Loop to find no of disconnected components in the graph, every time some will be marked as visited and counter raised.
         if(!visit[i.first]){
             dfs(visit,g,i.first);
             cnt++;
         }
     }
     return cnt;
     
    
}
