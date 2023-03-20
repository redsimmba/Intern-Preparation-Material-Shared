//Approach 1, Sort and Fill in Extra Space the greatest element in sorted array, removing one after using it.
#include<bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int>& v) {
        vector<int> x=v;
        int n=v.size();
        sort(x.begin(),x.end());
        int b=n-1;
        for(int i=0;i<n;i++){
            if(i%2){
                v[i]=x[b];
                b--;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                v[i]=x[b];
                b--;
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    wiggleSort(v);
    
    return 0;
}