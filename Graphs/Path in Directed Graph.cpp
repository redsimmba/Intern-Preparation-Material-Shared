// BFS Solution, we traverse thorugh each element's neighbours before going to its neighbours' neighbours.

int Solution::solve(int key, vector<vector<int> > &mat) {
    map<int,vector<int>> m;// adjacency list to store the graph
    if(key==1){
        return 1;
    }
    map<int, bool> visit;// If an element has been visited or no
    for(int i=0;i<mat.size();i++){
        m[mat[i][0]].push_back(mat[i][1]);
    }
    queue<int> q;
    q.push(1);// Start Index
    while(!q.empty()){
        int x=q.front();
        // if(visit[x]==true){
        //     q.pop();
        //     continue;
        // }
        q.pop();
        if(x==key){
            return 1;
        }
        visit[x]=true;// node visited
        for(int i=0;i<m[x].size();i++){// push all unvisited neighbours 
            if(!visit[m[x][i]]){
                q.push(m[x][i]);
            }
        }
    }
    return 0;
}

// Depth First Search , we basically push the neighbors in the stack and iterate upon them until we find the element we're searching for
int Solution::solve(int key, vector<vector<int> > &mat) {
    map<int,vector<int>> m;
    if(key==1){
        return 1;
    }
    map<int, bool> visit;
    for(int i=0;i<mat.size();i++){
        m[mat[i][0]].push_back(mat[i][1]);
    }
    stack<int> s;
    s.push(1);
    while(!s.empty()){
        int x=s.top();
        visit[x]=true;
        if(x==key){
            return 1;
        }
        s.pop();
        vector<int> y=m[x];
        for(int i=y.size()-1;i>=0;i--){
            if(!visit[y[i]]){
                s.push(y[i]);
            }
        }
    }
    return 0;
}

