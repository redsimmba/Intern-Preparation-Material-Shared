// Binary Number Approach, Use Bitset

#include<bitset>

vector<vector<int> > Solution::subsets(vector<int> &v) {
    int n=v.size();
    vector<vector<int> > ans;
    for(int i=0;i<pow(2,n);i++){
        bitset<100> b(i);
        vector<int> t;
        for(int j=0;j<100;j++){
            if(b[j]==1){
                t.push_back(v[j]);
            }
        }
        sort(t.begin(),t.end());
        ans.push_back(t);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

// Recursive Approach


void func(vector<int> v, int i, int n,vector<int> x, vector<vector<int> > &t){// t has to be declared locally, or passed every time, else( if global ) garbage values remain

    //Base Case
    if(i==n){
        sort(x.begin(),x.end());
        t.push_back(x);
        x.clear();
        return;
    }
    //Recursive Case
    func(v,i+1,n,x,t);// Don't include
    x.push_back(v[i]);
    func(v,i+1,n,x,t);// Included
}
vector<vector<int> > Solution::subsets(vector<int> &v) {
    int n=v.size();
    vector<int> x;
    vector<vector<int> > t;
    func(v,0,n,x,t);
    sort(t.begin(),t.end());
    return t;
}



