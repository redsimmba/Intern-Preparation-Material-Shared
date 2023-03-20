class Solution {
public:
    int search(vector<int>& v, int k) {
        int n=v.size();
        if(n==1 && v[0]!=k){
            return -1;
        }
        int s=0;
	    int e=n-1;
	    while(s<=e){
		long long int mid=(s+e)/2;
		if(v[mid]==k){
			//cout<<mid;
			return mid;
		}
		if(v[mid]>=v[s]){//Check for sorted Array on left side,then basic binary search
			if(k>=v[s] && k<v[mid]){
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}
		else{//Check for sorted array on the right side, then basic binary search
			if(k>v[mid] && k<=v[e]){
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
	}

	return -1;
        
    }
};