//Two Pointer Greedy Approach, heaviest person left will always go, if possible, we'll attach the lightest person with him.
class Solution {
public:
    int numRescueBoats(vector<int>& v, int lim) {
        sort(v.begin(),v.end());
        int i=0;
        int n=v.size();
        int j=n-1;
        int ans=0;
        int boat=0;
        while(i<=j){
            ans++;
            if(v[j]+v[i]<=lim){
                i++;
            }
            j--;
            
        }
        return ans;
        
        
    }
};