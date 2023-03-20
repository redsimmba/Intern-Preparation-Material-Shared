vector<int> Solution::nextPermutation(vector<int> &v) {
    int n=v.size();
    int i,j;
    for(i=n-2;i>=0;i--){// To find pivot
        if(v[i+1]>v[i]){
            break;
        }
    }
    if(i==-1){
        reverse(v.begin(),v.end());// if its reverse sorted
        return v;
    }
    for(j=n-1;j>i;j--){// first larger element starting from n-1
        if(v[j]>v[i]){
            break;
        }
    }
    swap(v[j],v[i]);// swap pivot with just larger element
    reverse(v.begin()+i+1,v.end());// reverse the rest of the array
    return v;
}
