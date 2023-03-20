// We just need to count the number of subsets with sum =(total_sum+diff)/2;, here diff is given by the required sum, else complete same
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,diff;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cin>>diff;
    int total_sum=accumulate(v.begin(),v.end(),0);// to calculate total sum of array
    if(total_sum<diff || (total_sum+diff)%2!=0){// if sum<diff, then we can't have difference less than diff, if sum is not even, we can't find 26.5 for example
        return 0;
    }
	int sum=(total_sum+diff)/2;
        if(sum<0){// all elements of array are positive
            return 0;
        }
        int zer=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                zer++;
            }
        }
       
	vector<vector<int>> t(n+1,vector<int> (sum+1,0));
	for(int i=0;i<=n;i++){
		t[i][0]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(v[i-1]<=j && v[i-1]!=0){// for 0, every 0 introduces 2 more cases of same concequence, add 0 or subtract 0, same meaning
				t[i][j]=t[i-1][j]+t[i-1][j-v[i-1]];
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return pow(2,zer)*t[n][sum];// (0,0,0,2) will always have 8 cases with 0 having same consequence.
        
	return 0;
}