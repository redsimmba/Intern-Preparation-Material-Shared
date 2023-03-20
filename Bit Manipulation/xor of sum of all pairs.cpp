#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    int ans=2*v[0];
    for(int i=1;i<n;i++){
        ans^=(2*v[i]);
    }
    cout<<ans<<endl;

    



	return 0;
}