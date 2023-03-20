#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool check(int mid, vector<int> v, int cow){
	int n=v.size();
	int place=0;
	int i=1;
	int placed=1;
	while(i<n){
		if(v[i]-v[place]>=mid){
			placed++;
			if(placed==cow){
				return true;
			}
			place=i;
			
		}
		i++;
	}
	
	return false;
}
int mindistance(vector<int> v, int n, int c){
	int s=0;
	int e=v[n-1]-v[0];
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(check(mid,v,c)){
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
    int n;
    cin>>n;
    int c;
    cin>>c;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<mindistance(v,n,c);
    



	return 0;
}

