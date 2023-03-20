void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]>b[j]){
            v.push_back(b[j]);
            j++;
        }
        else{
            v.push_back(a[i]);
            i++;
        }
    }
    while(i!=n){
        v.push_back(a[i]);
        i++;
    }
    while(j!=m){
        v.push_back(b[j]);
        j++;
    }
    a=v;
    
}
