int Solution::solve(vector<int> &v, int k) {
    int n=v.size();
    int cost=0;
    priority_queue<int> q;// max heap so that we can access the greatest element every time
    for(int i=0;i<n;i++){
        q.push(v[i]);
    }
    for(;k>0;k--){
        cost+=(q.top());// add the greaterst element i.e. most empty seats row
        int x=q.top();
        q.pop();
        q.push(x-1);// decrease mepty seats by 1 and push back to the heap
    }
    return cost;
    
}
