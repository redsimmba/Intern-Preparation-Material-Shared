class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int i=0;
        int j=n-1;
        int maxa=0;
        while(i!=j){
            maxa=max(maxa,min(v[i],v[j])*(j-i));
        if(v[j]>v[i]){
            i++;
        }
            else{
                j--;
            }
            
            
        }
        return maxa;
        
    }
};