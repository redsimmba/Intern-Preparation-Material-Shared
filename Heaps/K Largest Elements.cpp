vector<int> Solution::solve(vector<int> &v, int k) {
    priority_queue<int,vector<int>,greater<int>> q;// Min heap used coz LARGEST K elements were asked, we can pop the smaller top elements
    for(int i=0;i<v.size();i++){
        q.push(v[i]);
        if(q.size()>k){// if size exceeds k, simply pop the smaller useless elements
            q.pop();
        }
    }
    vector<int> x;
    while(!q.empty()){
        x.push_back(q.top());// final heap to array
        q.pop();
    }
    return x;
}
