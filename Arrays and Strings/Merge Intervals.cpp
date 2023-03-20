// Using the boiler code from Merge Overlapping Intervals. O(nlogn) time, O(1) space in the non-stack solution.

bool comp(Interval a, Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &inter, Interval newone) {
    inter.push_back(newone);
    int n=inter.size();
    sort(inter.begin(),inter.end(),comp);
     stack<Interval> s;
         s.push(inter[0]);
         for(int i=1;i<n;i++){
             Interval x=inter[i];
             Interval y=s.top();
             if(y.end<x.start){
                 s.push(x);
             }
             else{
                 s.pop();
                 y.end=max(x.end,y.end);
                 s.push(y);
             }
         }
         vector<Interval> v;
         while(!s.empty()){
             v.push_back(s.top());
             s.pop();
         }
         reverse(v.begin(),v.end());
         return v;
    
}

// Better Solution
vector<Interval> Solution::insert(vector<Interval> &inter, Interval newone) {
    vector<Interval> v;
    int n=inter.size();
    for(int i=0;i<n;i++){
        Interval x=inter[i];
        if(newone.start>x.end){
            v.push_back(x);
        }
        else if(x.start>newone.end){// If we encounter that the new interval non overlapping and comes before the present interval, hen we make the current as new interval and continue 
            v.push_back(newone);
            newone=inter[i];// new one updated for further loops
        }
        else if(newone.start<=x.end || newone.end>=x.start){
            newone=Interval(min(x.start,newone.start), max(newone.end,x.end));// If intersecting intervals are there, we make new new interval combining it with each other
        }
    }
    v.push_back(newone);// last one 
    return v;
    
    
}

