//number of ones in the number

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int cnt=0;
    //1

    while(n){
        cnt++;
        n=n&(n-1);
    }

    //2

    // while(n){
    //     cnt++;
    //     int m=(n)&(-n);
    //     n=n-m;
    // }
    
    //3
    //  bitset<100> b(n);
    // cout<<b.count()<<endl;
    cout<<cnt<<endl;


	return 0;
}
