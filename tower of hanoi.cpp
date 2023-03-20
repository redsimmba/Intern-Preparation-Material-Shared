#include <bits/stdc++.h>
using namespace std;
// #define int long long int

void toh(int n, char src, char helper, char dest, int &count){
	if(n==0){
		return;
	}
	toh(n-1,src,dest,helper,count);
	cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
	count++;
	toh(n-1,helper,src,dest,count);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0;
    int n;
    cin>>n;
    toh(n,'A','B','C',count);
    cout<<endl;
    cout<<"Number of Moves : "<<count<<endl;



	return 0;
}
