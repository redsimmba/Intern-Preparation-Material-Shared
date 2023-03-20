//Easy Binary Search Solution

class Solution {
public:
    bool check(long long int speed, vector<int> v, long long int n, long long int h){
        long long int hours=0;//No of hours koko will take to eat all bananas at given speed
        for(int i=0;i<n;i++){
            hours+=(v[i]/speed)+(v[i]%speed!=0);//Hours taken to eat any pile is this
        }
        return hours<=h;//Boolean Return
    }
    int minEatingSpeed(vector<int>& v, int h) {//v-> piles
        //sort(v.begin(),v.end());
       long long  int n=v.size();
        long long int s=1;
        long long int e=*max_element(v.begin(),v.end());
        long long int ans=0;
        while(s<=e){
            long long int mid=(s+e)/2;
            if(check(mid,v,n,h)){
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