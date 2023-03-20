
map<vector<int>,bool> mapa;// To ensure no duplicates make it through
void func(vector<int> v, int i, int n,vector<int> x, vector<vector<int> > &t){
    //Base Case
    if(i==n){
        if(mapa[x]){
            return;
        }
        else{
        //sort(x.begin(),x.end());// NOT required since input was sorted by us
        mapa[x]=1;
        t.push_back(x);
        x.clear();
        return;
        }
    }
    //Recursive Case
 
    func(v,i+1,n,x,t);// Not taking the element
    x.push_back(v[i]);
    func(v,i+1,n,x,t);// Taking the element
    
}


vector<vector<int> > Solution::subsetsWithDup(vector<int> &v) {
    mapa.clear();// VVVV IMPORTANT, clear map before every test case, as it is declared globally
    sort(v.begin(),v.end());// Sorting the input array ensures each sorted 1D array in the 2D array

    int n=v.size();
    vector<int> x;
    vector<vector<int> > t;
    func(v,0,n,x,t);
    sort(t.begin(),t.end());
    return t;
}
