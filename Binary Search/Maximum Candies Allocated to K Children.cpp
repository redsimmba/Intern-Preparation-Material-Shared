//Easy Intuitive Approach

class Solution {
public:
    bool check(int mid, vector<int> v, int k, int n){//Only Cases where k>n and sum>k, i.e no of children is more than no of piles and no of candies is more than number of children
        long long int no_of_children=0;
        for(int i=0;i<n;i++){
            int temp=floor(v[i]/mid);
            no_of_children+=temp;
        }
        return no_of_children>=k;
        
        
    }
    int maximumCandies(vector<int>& v, long long k) {//v-> candies
        int n=v.size();
        
       long long int sum=0;
        int maxa=INT_MIN;
        
        for(int i=0;i<n;i++){
            maxa=max(maxa,v[i]);
            sum+=v[i];
        }
       
        if(sum<k){
            return 0;
        }
        int s=1;
        int e=maxa;
        int ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            //Can use boolean funtion to do the thing done below
            long long child=0;
            for(int i=0;i<n;i++){
                child+=floor(v[i]/mid);
            }
            if(child>=k){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
        
    }
};