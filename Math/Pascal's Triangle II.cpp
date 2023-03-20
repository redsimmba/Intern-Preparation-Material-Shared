//nCr Recursive Relation usage alongwith long long int 
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
};
