#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=accumulate(v.begin(),v.end(),0);// Sum of all elements of the array
    vector<vector<bool>> t(n+1,vector<bool> (sum+1,0));// (n+1)*(sum+1) matrix initialised to 0
    for(int i=0;i<=n;i++){
        t[i][0]=1;// weight 0 is always possible
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){

            if(v[i-1]<=j){
                bool cand1=t[i-1][j-v[i-1]];
                bool cand2=t[i-1][j];
                t[i][j]=cand1 | cand2;
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    int limit=(sum/2);// We use upper limit as sum/2
    for(int i=limit;i>=0;i--){
        if(t[n][i]==true){// whichever value of i has a subset with i==n, we return that and end our program
            cout<<limit<<endl;
            cout<<sum-2*(i)<<endl;
            break;
        }
    }
    return 0;
}