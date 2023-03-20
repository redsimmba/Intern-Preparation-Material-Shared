map<vector<int>,bool> mapa;// To ensure no duplicates in the final 2D vector
void func(vector<int> v, int i, int n,vector<int> x, vector<vector<int> > &t, int sum, int key){// Just Added Sum to the last Subset II problem.
    //Base Case
    
    if(sum==key && i<=n){
        if(mapa[x]){
            return;
        }
        else{
        //sort(x.begin(),x.end());
        mapa[x]=1;
        t.push_back(x);
        x.clear();
        return;
        }
    }
   
    if(i==n){
        return;
    }
    //Recursive Case
    
    func(v,i+1,n,x,t,sum,key);
    x.push_back(v[i]);
    func(v,i+1,n,x,t,sum+v[i],key);
    
}



vector<vector<int> > Solution::combinationSum(vector<int> &v, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    mapa.clear();
    sort(v.begin(),v.end());

    int n=v.size();
    vector<int> x;
    vector<vector<int> > t;
    func(v,0,n,x,t,0,b);
    sort(t.begin(),t.end());
    return t;
}
