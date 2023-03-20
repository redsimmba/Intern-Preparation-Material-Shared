#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> solve1(vector<int> &v) {
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
        else{
            swap(v[i],v[j]);
        }
        
    }
    return v;
  

}
vector<int> solve2(vector<int> &v) {
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==1){
            swap(v[i],v[j]);
            j--;
        }
        else{
            i++;
        }
        
    }
    return v;
  

}


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
    vector<int> x=solve1(v);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    vector<int> y=solve2(v);
    for(int i=0;i<y.size();i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;


    



	return 0;
}