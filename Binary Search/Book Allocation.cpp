#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool check(int mid, vector<int> v, int child){
	int child_count=1;
	int n=v.size();
	int i=0;
	int cur_sum=0;
	while(i<n){
		
		if(v[i]>mid){
			return false;
		}
		if(cur_sum+v[i]>mid){
			child_count++;
			cur_sum=v[i];
			if(child_count>child){
				return false;
			}
		}
		else{
			cur_sum+=v[i];
		}
		i++;
}
return true;
}
int minmaxpages(vector<int> v, int n, int child){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
	}
	int s=v[n-1];
	int e=sum;
	int ans=-1;
	while(s<=e){

		int mid=(s+e)/2;
		//cout<<"Break Next "<<mid<<" "<<endl; 
		if(check(mid,v,child)){
			e=mid-1;
			ans=mid;
		}
		else{
			s=mid+1;
		}
		//cout<<"Once"<<endl;
	}
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,child;
    cin>>n>>child;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    // for(int i=0;i<n;i++){
    // 	cout<<v[i]<<endl;
    // }
    cout<<minmaxpages(v,n,child)<<endl;



	return 0;
}

