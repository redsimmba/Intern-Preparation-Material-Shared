class Solution {
public:
    int searchInsert(vector<int>& v, int key) {
        if(key<v[0]){
            return 0;
        }
        int s=0;
        int n=v.size();
        int ans;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(v[mid]==key){
                ans=mid;
                break;
            }
            else if(v[mid]>key){
                // ans=mid-1;
                e=mid-1;
            }
            else{
                s=mid+1;// To insert we just see +1 index, NO mid-1
                ans=mid+1;
            }
        }
        return ans;
    }
};