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
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    int xora=v[0];
    for(int i=1;i<v.size();i++){
        xora^=v[i];
    }
  
    int rsb;
    if(xora%2){
        rsb=0;
    }
    else{
    bitset<20> b(xora);

    for(int i=0;i<20;i++){
        if(b[i]==1){
            rsb=i;
            break;
        }
    }
    }
   
    vector<int> x;
    vector<int> y;
    for(int i=0;i<v.size();i++){
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
    int second_integer=y[0];
    for(int i=1;i<y.size();i++){
        second_integer^=y[i];
        
    }
    for(int i=0;i<n;i++){
        if(v[i]==first_integer){
            cout<<"Missing Number -> "<<second_integer<<endl;
            cout<<"Repeating Number -> "<<first_integer<<endl;
            break;
        }
        if(v[i]==second_integer){
            cout<<"Missing Number -> "<<first_integer<<endl;
            cout<<"Repeating Number -> "<<second_integer<<endl;
            break;
        }
    }




    
    
 
    



    return 0;
}