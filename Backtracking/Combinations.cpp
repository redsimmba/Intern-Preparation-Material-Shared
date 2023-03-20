
void func(vector<int> v, int i, int n,vector<int> x, vector<vector<int> > &t, int k){// Same approach as other subset combination questions
    //Base Case
    if(i==n){
        if(x.size()==k){// ONly if the last element is included in the k size array
        t.push_back(x);
        x.clear();
        return;
        }
        else{
            return;
        }
    }
    if(x.size()==k){// if size k subset occurs before we reach the end of array, push it and return
         t.push_back(x);
        x.clear();
        return;
    }
    //Recursive Case
    func(v,i+1,n,x,t,k);
    x.push_back(v[i]);
    func(v,i+1,n,x,t,k);
}

vector<vector<int> > Solution::combine(int n, int k) {
    vector<int> v;// Vector to store 1 to n just to maintain the method applied in other questions.
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    vector<int> x;
    vector<vector<int> > t;
    func(v,0,n,x,t,k);
    sort(t.begin(),t.end());
    return t;
}
