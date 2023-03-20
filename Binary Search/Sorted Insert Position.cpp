int Solution::searchInsert(vector<int> &v, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=v.size();
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(v[mid]==B){
            return mid;
        }
        else if(v[mid]>B){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;//start returns the first element greater than B, thus its index is the correct ans
    
    
}
