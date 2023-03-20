int peakElement(int v[], int n)
    {
        if(n==1){
            return 0;
        }
        if(v[0]>v[1]){
            return 0;
        }
        if(v[n-1]>v[n-2]){
            return n-1;
        }
       for(int i=1;i<n-1;i++){
           if(v[i]>v[i-1] and v[i]>v[i+1]){
               return i;
           }
       }
       return -1;
    }


/// Now the O(logn) approach
 int peakElement(int v[], int n)
    {
        int mid=0;
        int l=0;
        int r=n-1;
        while(l<=r){
             mid=(l+r)/2;
            if((mid==0 or v[mid-1]<=v[mid]) and (mid==n-1 or v[mid+1]<=v[mid])){
                break;
            }
            if(mid>0 and v[mid-1]>v[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return mid;
    }