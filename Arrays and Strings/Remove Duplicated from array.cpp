int remove_duplicate(int a[],int n){
        int cur=0;
        int high=0;
        while(high<n){
            if(a[high]==a[cur]){
                high++;
            }
            else{
                a[++cur]=a[high];
            }
        }
        return cur+1;
    }