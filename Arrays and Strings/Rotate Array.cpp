class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n=v.size();
        k=k%n;// try dry running the code
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        
        
    }
};