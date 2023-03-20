//Book Allocation Problem Only.

class Solution {
public:
    bool check(int mid, vector<int> v, int d){
        int n=v.size();
        int day=1;
        int i=0;
        int sum=0;
        while(i<n){
         
            if(sum+v[i]>mid){//If its exceeded, we switch to another day
                day++;
                sum=v[i];
            }
            else{
                sum+=v[i];//Else we continue filling up the ship for the time being
            }
            i++;
           
        }
       return day<=d;//Boolean Return
    }
    int shipWithinDays(vector<int>& v, int d) {
        //sort(v.begin(),v.end()); DONT SORT, Conveyer Belt is carrying items one after other, we don;t have them all present at once.
        int n=v.size();
        int sum=0;
        int maxa=INT_MIN;
        for(auto i=0;i<n;i++){
            sum+=v[i];
            maxa=max(maxa,v[i]);
        }
        int s=maxa;//Minimum Size has to be the size of teh maximum element
        int e=sum;//Maximum size can be the combined sum of all items
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(mid,v,d)){//check if mid size ship can deliver contents in d days or less
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};