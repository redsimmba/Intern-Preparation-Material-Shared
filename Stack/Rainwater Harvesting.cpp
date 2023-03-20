// O(n) space and O(n) time solution

int Solution::trap(const vector<int> &v) {
    int n=v.size();
    vector<int> left(n,0);// to maintain maximum element to the left of the element
    vector<int> right(n,0);// To maintain the maximum element to he right of the element
    int maxa=v[0];// Variable to store max value until just left element, which will be the maximal on left for the given element
    for(int i=1;i<n;i++){
        left[i]=maxa;// assign max first
        if(v[i]>maxa){// if the present is larger than the max left, then update max left
            maxa=v[i];
        }
    }
    maxa=v[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=maxa;
        if(v[i]>maxa){
            maxa=v[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int mina=min(left[i],right[i]);// minimum of these water is stored in the structure
        if(v[i]>=mina){// if given height is greater than minimum there, then we can't store any water
            continue;
        }
        else{
            cnt+=(mina-v[i]);// else store water equal to min-v[i]
        }
    }
    return cnt;
}

// we compute for each element individually, having no effect whatsover on the continguous storages.


// BEST SOLUTION, NO extra space

// Important,Remember
int Solution::trap(const vector<int> &v) {
    int n=v.size();
    int low=0;
    int high=n-1;
    int leftmax=0;
    int rightmax=0;
    int water=0;
    while(low<=high){
        if(v[low]<v[high]){// if greater element exists on right
            if(v[low]<leftmax){// compare element with leftmax
                water+=(leftmax-v[low]);
            }          
            else{
                leftmax=v[low];
            }
            low++;
        }
        else{
            if(v[high]<rightmax){// compare highest element on right uptil now
                water+=(rightmax-v[high]);
            }
            else{
                rightmax=v[high];
            }
            high--;
        }
    }
    return water;
}
