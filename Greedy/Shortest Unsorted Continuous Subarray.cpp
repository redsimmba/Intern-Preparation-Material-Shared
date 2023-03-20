//Basic Intuitive Sorting Approach, O(nlogn) time O(n) extra space for a sorted vector;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        int n=v.size();
        vector<int> x=v;
        sort(x.begin(),x.end());
        int i=0;
        int s=-1;
        while(i<n){
            if(v[i]!=x[i]){
                s=i;
                break;
            }
            i++;
        }
        if(s==-1){
            return 0;
        }
        int j=n-1;
        int e=n-1;
        while(j>=0){
            if(v[j]!=x[j]){
                e=j;
                break;
            }
            j--;
        }
        return e-s+1;
        
        
    }
};

//Better Approach, Double Pass O(n) time, constant space
 int n=nums.size();

    int end=0;
        int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        if(nums[i]>=maxi){
            maxi=nums[i];
        }
        else{
            end=i;
        }
    }

    if(end==0) {
        return 0;
    }

    int start=0,mini=INT_MAX;

    for(int i=n-1;i>=0;i--){
        if(nums[i]<=mini){
            mini=nums[i];
        }
        else{
            start=i;
        }
    }

    return (end-start+1);

    //Using Stack
    