//Best Approach, Traverse left to right, if v[i]>v[i-1] then inc, then right to left, v[i+1]<v[i], then inc, finalise with max of both the arrays.
int Solution::candy(vector<int> &v) {
    int n=v.size();
    vector<int> left_to_right(n,1);
    vector<int> right_to_left(n,1);
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]){
            left_to_right[i]=left_to_right[i-1]+1;
        }

    }
    for(int i=n-2;i>=0;i--){
        if(v[i]>v[i+1]){
            right_to_left[i]=right_to_left[i+1]+1;

        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=max(left_to_right[i],right_to_left[i]);
    }
    return ans;
}
