//Intuitive Simple Traversal Approach, O(nq) time, O(n) space

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int

// int32_t main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     int q;
//     cin>>q;
//     while(q--){
//     	int start,end,inc;
//     	cin>>start>>end>>inc;
//     	for(int i=start;i<=end;i++){
//     		v[i]+=inc;
//     	}

//     }
//     for(int i=0;i<n;i++){
//     	cout<<v[i]<<" ";
//     }

// cout<<endl;


// 	return 0;
// }


//Optimised Aproach, Use Prefic sum to introduce the increments upto one extra element(-ve goes there), where it cancels out in prefix sum
//O(n) + O(q), Usually O(n) but O(q) is q>>>>n.
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    int q;
    cin>>q;
    while(q--){
    	int start,end,inc;
    	cin>>start>>end>>inc;
    	v[start]+=inc;
    	v[end+1]+=(-inc);	
    }
    //Calculate Prefix Sum
    for(int i=1;i<n+1;i++){
    	v[i]+=v[i-1];
    }
    for(int i=0;i<n;i++){
    	cout<<v[i]<<" ";
    }

    cout<<endl;


	return 0;
}

