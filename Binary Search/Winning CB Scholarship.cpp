#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool check(int n, int m, int x, int y, int mid){
	int no_of_coupons_required=mid*x;
	int available_coupons=m+(n-mid)*y;
	if(available_coupons>=no_of_coupons_required){
		return true;
	}
	return false;
}
int maxfree(int n, int m, int x, int y){
	int s=0;
	int e=n;
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(check(n,m,x,y,mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    cout<<maxfree(n,m,x,y)<<endl;
    



	return 0;
}

