#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,m,tow;
    	cin>>n>>m>>tow;//Row * Column and No of towers
    	
    	vector<pair<int,int>> tow_pos(tow);//Positions of Towers
    	vector<int> row_diff;
    	vector<int> col_diff;
    	for(int i=0;i<tow;i++){
    		int a,b;
    		cin>>a>>b;
    		tow_pos.push_back(make_pair(a,b));
    	}
    	for(int i=0;i<tow-1;i++){
    		row_diff.push_back(tow_pos[i+1].first-tow_pos[i].first);
    		col_diff.push_back(tow_pos[i+1].second-tow_pos[i].second);
    	}
    	row_diff.push_back(tow_pos[0].first-0);
    	row_diff.push_back(n-1-tow_pos[tow_pos.size()-1].first);
    	col_diff.push_back(tow_pos[0].second-0);
    	col_diff.push_back(m-1-tow_pos[tow_pos.size()-1].second);
    	sort(row_diff.begin(),row_diff.end());
    	sort(col_diff.begin(),col_diff.end());

    	cout<<row_diff[row_diff.size()-1]*col_diff[col_diff.size()-1]<<endl;



    }



	return 0;
}

