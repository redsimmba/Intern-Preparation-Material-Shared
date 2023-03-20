class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        vector<int> x;
        int l=v.size();
        int i=0;
        while(i<l){
            x.push_back(pow(v[i],2));
            i++;
        }
        sort(x.begin(),x.end());
        return x;
    }
};