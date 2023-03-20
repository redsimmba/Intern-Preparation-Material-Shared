  int minReorder(int n, vector<vector<int>>& mat) {
        map<int,vector<int>> m;
        map<int,vector<int>> back;
        for(int i=0;i<mat.size();i++){
            m[mat[i][0]].push_back(mat[i][1]);
            back[mat[i][1]].push_back(mat[i][0]);
        }
        queue<int> q;
        q.push(0);
        int cnt=0;
        vector<bool> visit(n,0);
        visit[0]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto i:m[x]){// all edges going away from 0(or its neighbours)
                if(visit[i]==0){
                    q.push(i);
                    visit[i]=1;
                    cnt++;
                }
            }
            for(auto i:back[x]){// all edges which are going to 0, bu whose children might NOT point to 0
                if(visit[i]==0){
                    q.push(i);
                    visit[i]=1;
                }
            }
        }
        return cnt;
    }