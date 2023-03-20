#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool compare(pair<int,int> &a, pair<int,int> &b){
	return (a.second<b.second);
}
// Intuitive Approach, nested loop used
int maxact(vector<int> s, vector<int> e, int n){
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		v[i]=make_pair(s[i],e[i]);
	}
	sort(v.begin(),v.end(),compare);//Comparator is boolean operator
	int i=0;
	int ans=0;
	while(i<n){
		ans++;
		int temp=0;
		for(int j=i+1;j<n;j++){
			if(v[j].first>v[i].second){
				i=j;
				temp=1;
				break;
			}
		}
		if(temp==0){
			break;
		}

	}
	return ans;

}

//Single Parse, no nested loop better approach
int maxacta(vector<int> s, vector<int> e, int n){
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		v[i]=make_pair(s[i],e[i]);
	}
	sort(v.begin(),v.end(),compare);//Comparator is boolean operator
	int cur_end=v[0].second;
	
	int ans=1;
	//Iterate Over Remaining
	int i=1;
	while(i<n){
		if(v[i].first>cur_end){
			ans++;
			cur_end=v[i].second;
		}
		i++;

	}
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    for(int i=0;i<n;i++){
    	cin>>v2[i];
    }
    cout<<maxact(v1,v2,n)<<endl;
    cout<<maxacta(v1,v2,n)<<endl;

	return 0;
}

//To traverse a vector
// for(int i=0;i<x.size();i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;