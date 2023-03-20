//Extra Space Used, O(n) for 2 vectors, rest approach is same
class Solution {
public:
    int partitionDisjoint(vector<int>& v) {
        int n=v.size();
        // int left_max=INT_MIN;
        // int right_min=INT_MAX;
        vector<int> left_max(n);
        vector<int> right_min(n);
        int a=INT_MIN;
        int b=INT_MAX;
        int i=0;
        int j=n-1;
        while(i<n && j>=0){
            if(v[i]>a){
                a=v[i];
            }
            left_max[i]=a;
            i++;
            if(v[j]<b){
                b=v[j];
            }
            right_min[j]=b;
            j--;
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(left_max[i]<=right_min[i+1]){
                return i+1;
            }
        }
        return 1;
        
    }
};

//Without Extra SPace and in same O(n) time
