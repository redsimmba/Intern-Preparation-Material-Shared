//See theory for help, how modulus function opens, then we only need to calculate v[i]+i and v[i]-i, for the entire array, then max - min for the final maximum.

int Solution::maxArr(vector<int> &v) {
    int n=v.size();
    vector<int> add_array(n);
    vector<int> sub_array(n);
    for(int i=0;i<n;i++){
        add_array[i]=v[i]+i;
        sub_array[i]=v[i]-i;
    }
    int maxa1=*max_element(add_array.begin(),add_array.end());
    int mina1=*min_element(add_array.begin(),add_array.end());
    int maxa2=*max_element(sub_array.begin(),sub_array.end());
    int mina2=*min_element(sub_array.begin(),sub_array.end());
    return max(maxa1-mina1,maxa2-mina2);
    }
