//Basic Binary Search Space Implementation

class Solution {
public:
    bool check(int mid, vector<int> v, int k, int n){// Mid is the divisor
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=(v[i]/mid)+(v[i]%mid!=0);
            sum+=temp;
        }
        return sum<=k;
    }
    int smallestDivisor(vector<int>& v, int threshold) {//<=threshold
        int n=v.size();
        int s=1;
        int e=*max_element(v.begin(),v.end());
        int ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(mid,v,threshold,n)){
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