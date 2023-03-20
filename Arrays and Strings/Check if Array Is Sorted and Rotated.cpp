//Approach 1, Think of Rotation in any fashion, and if v[i+1]<v[i] more than once, it fails, same for the corner elements, 
class Solution {
public:
    bool check(vector<int>& v) {
        if(is_sorted(v.begin(),v.end())){
            return true;
        }
        int n=v.size();
        int change=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                change++;
            }
        }
        if(v[0]<v[n-1]){
            return false;
        }
        if(change>1){
            return false;
        }
        return true;
        
    }
};

//Approach 2, Faster Idk Why
class Solution {
public:
    bool check(vector<int>& v) {
        int n=v.size();
        int change=0;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                change++;
            }
        }
        if(v[0]<v[n-1]){// For Sorted Array, change will become 1.
            change++;
        }
        if(change>1){
            return false;
        }
        return true;
        
    }
};