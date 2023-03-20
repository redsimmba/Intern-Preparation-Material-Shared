//Used nCr Recurrence and Pascal Triangle 2 code
#define ll long long int

class Solution {
public:
    vector<int> getRow(int n) {
        ll r=1;
        vector<int> v;
        v.push_back(1);
        if(n==0){
            return v;
        }
        while(r<n){
            ll factor=((n-r+1)*v[r-1])/r;
            v.push_back(factor);
            
            r++;
        }
        v.push_back(1);
        return v;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> x;
        for(int i=0;i<n;i++){
            x.push_back(getRow(i));
        }
        return x;
        
        
    }
};