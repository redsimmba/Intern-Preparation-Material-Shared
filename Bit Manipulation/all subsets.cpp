#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
    int total=pow(2,n);
    for(int i=0;i<total;i++){
       bitset<20> b(i);
       for(int j=0;j<n;j++){
        if(b[n-j-1]==1){
            cout<<v[j]<<"    ";
        }
        else{
            cout<<"-    ";
        }
       }
       cout<<endl;

        
    }
    



    return 0;
}