//Intuitive First Time Solution, Easy to Think
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int key) {
        int n=rocks.size();
        vector<int> diff(n);
        for(auto i=0;i<n;i++){
            diff[i]=capacity[i]-rocks[i];
        }
        sort(diff.begin(),diff.end());
        for(int i=0;i<n;i++){
          
            if(diff[i]>=key){
                diff[i]=diff[i]-key;
               
                key=0;
                break;
            }
            else{
                
                key=key-diff[i];
                diff[i]=0;
             
            }
            if(key==0){
                break;
            }
          
            
        }
        int ans=0;
        for(int i=0;i<n;i++){
            
            if(diff[i]==0){
                ans++;
            }
        }
        return ans;
        
    }
};