#include <bits/stdc++.h>
using namespace std;
#define int long long int
void func(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=0;
    int k=n-1;
    while(i<k && j<k){
        if(v[j]==0){
            swap(v[i],v[j]);
            i++;
            
            j++;

        }
        else if(v[j]==1){
            j++;
            
        }
        else{
            swap(v[j],v[k]);
            k--;
        }

    }

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
    func(v);
    for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    



	return 0;
}