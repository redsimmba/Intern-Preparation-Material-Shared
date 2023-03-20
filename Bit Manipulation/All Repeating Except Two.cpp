//Output Sorted Numbers

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
    int m=v[0];
    for(int i=1;i<n;i++){
        m=m^v[i];
    }
    int rsb;
    if(m%2){
        rsb=0;
    }
    else{
    bitset<20> b(m);

    for(int i=0;i<20;i++){
        if(b[i]==1){
            rsb=i;
            break;
        }
    }
    }
    vector<int> final;
    vector<int> x;
    vector<int> y;
    for(int i=0;i<n;i++){
        bitset<20> b(v[i]);
        if(b[rsb]==1){
            x.push_back(v[i]);
        }
        else{
            y.push_back(v[i]);
        }
    }
   int first_integer=x[0];
    for(int i=1;i<x.size();i++){
        first_integer^=x[i];
        
    }
     final.push_back(first_integer);
    
    int second_integer=y[0];
    for(int i=1;i<y.size();i++){
        second_integer^=y[i];
        
    }
    final.push_back(second_integer);
    sort(final.begin(),final.end());
    cout<<final[0]<<endl;
    cout<<final[1]<<endl;
    



    return 0;
}