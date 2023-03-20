// Optimised method using stack, update top if the new interval is merging. O(nlogn) time, O(n) space
bool comp(vector<int> &a, vector<int> &b){
    return a[0]>b[0];
}
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter) {
         // Code here
         int n=inter.size();
         sort(inter.begin(),inter.end());
         stack<vector<int>> s;
         s.push(inter[0]);
         for(int i=1;i<n;i++){
             vector<int> x=inter[i];
             vector<int> y=s.top();
             if(y[1]<x[0]){
                 s.push(x);
             }
             else{
                 s.pop();
                 y[1]=max(x[1],y[1]);
                 s.push(y);
             }
         }
         vector<vector<int>> v;
         while(!s.empty()){
             v.push_back(s.top());
             s.pop();
         }
         reverse(v.begin(),v.end());
         return v;
    }

// 2nd NO extra space method, simply use the last element of vector to consider whether to merge or not, update it in the former case


bool comp(vector<int> &a, vector<int> &b){
    return a[0]>b[0];
}
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter) {
         // Code here
         int n=inter.size();
         sort(inter.begin(),inter.end());
         vector<vector<int>> v;
         v.push_back(inter[0]);
         for(int i=1;i<n;i++){
             vector<int> x=inter[i];
             vector<int> y=v[v.size()-1];
             if(y[1]<x[0]){
                 v.push_back(x);
             }
             else{
                 v.pop_back();
                 y[1]=max(x[1],y[1]);
                 v.push_back(y);
             }
         }
        //  reverse(v.begin(),v.end());
         return v;
    }

