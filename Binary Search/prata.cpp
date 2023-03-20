#include <bits/stdc++.h>
using namespace std;
#define int long long int
//Function to Check if chefs can make required parathas in the given mid time
bool check(int timex, vector<int> v, int target){
	int i=0;
	int prata_made=0;
	while(i<v.size()){// We calculate no of parata made by every chef included
		// int time_taken=0;
		int rank=v[i];//Time take to make one prata
		int time=timex;
		while(time>0){
			time=time-rank;
			if(time>=0){
				prata_made++;
				rank+=v[i];
			}
		}
		i++;
	}
	if(prata_made>=target){
		return true;
	}
	return false;
}
//Funtion to Calculate the Minimum Time Taken By All Chefs to complete the order
int prata(int target, int n, vector<int> v){
	sort(v.begin(),v.end());
	int s=0;
	int e=(v[0]*(target)*(target+1))/2;
	//cout<<e<<endl;
	int min_time=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(check(mid,v,target)){
			min_time=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return min_time;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int paratha, chefs;
    	cin>>paratha>>chefs;
    	vector<int> rank(chefs);
    	for(int i=0;i<chefs;i++){
    		cin>>rank[i];
    	}
    	cout<<prata(paratha,chefs,rank)<<endl;
    }



	return 0;
}

