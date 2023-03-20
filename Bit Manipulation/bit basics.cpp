#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int i,j,k,m;
    cin>>i>>j>>k>>m;
    // bitset<32> b1(n);
    // bitset<32> b2(n);
    // bitset<32> b3(n);
    // bitset<32> b4(n);
    // b1.set(i,1);
    // cout<<b1.to_ulong()<<endl;
    // b2.set(j,0);
    // cout<<b2.to_ulong()<<endl;
    // b3.flip(k);
    // cout<<b3.to_ulong()<<endl;
    // bool x=(b4[m]==1);
    // if(x){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }
    int x=(n)|(1<<i);
    cout<<x<<endl;
    int y=(n)&~(1<<j);
    cout<<y<<endl;
    int z=(n)^(1<<k);
    cout<<z<<endl;
    int e=n&(1<<m);
    if(e==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }


    
    



	return 0;
}