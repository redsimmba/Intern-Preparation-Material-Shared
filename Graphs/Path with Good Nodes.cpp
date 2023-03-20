// DFS approach, simply iterate to each leaf, if cur<=c increase counter, else return

int cnt;
void dfs(vector<int> &a, map<int,vector<int>> &g, int c, int cur, int src, map<int,bool> visit){
    if(a[src-1]==1){
        cur++;
    }
    visit[src]=1;
    if(g[src].size()==1){// If we have reached the leaf node, size of vector is 1 NOT 0
        if(cur<=c){
            cnt++;
        }
        else{
            return;
        }
    }
    for(auto i: g[src]){
        if(!visit[i]){
            dfs(a,g,c,cur,i,visit);
        }
    }
    return;
}
int Solution::solve(vector<int> &a, vector<vector<int> > &b, int c) {
    map<int,vector<int>> g;
    int n=a.size();
    for(int i=1;i<=n;i++){
        g[i].push_back(0);
        g[i].pop_back();
    }
    map<int,bool> visit;
    for(int i=0;i<b.size();i++){
        g[b[i][0]].push_back(b[i][1]);
        g[b[i][1]].push_back(b[i][0]);
    }
    cnt=0;
    dfs(a,g,c,0,1,visit);
    return cnt;
}
