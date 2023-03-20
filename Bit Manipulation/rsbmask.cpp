//Output rightmost set bit masking all other set bits

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;
    cin>>n;
    //1
    // cout<<(n)&(-n)<<endl;

    //2
    if(n%2){
        cout<<"1"<<endl;
    }
    else{
        bitset<20> b(n);
        int i=1;
        for(;i<20;i++){
            if(b[i]==1){
                cout<<"1";
                break;
            }
        }
        while(i--){
            cout<<"0";
        }
        
        
    }





	return 0;
}