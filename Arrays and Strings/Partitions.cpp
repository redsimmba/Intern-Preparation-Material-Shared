#include<bits/stdc++.h>

int Solution::solve(int n, vector<int> &v) {
    int suma=accumulate(v.begin(),v.end(),0);
    if((suma%3)!=0){
        return 0;
    }
    int target=suma/3;
    // Basically I have to find the numbers of subrarays with sum=3 in the middle sum array
    int start=0;
    int temp=0;
    int i=0;
    for(;i<n;i++){
        temp+=v[i];
        if(temp==target){
            break;
        }
    }
    if(i==n){
        return 0;
    }
    start=i+1;
    temp=0;
     i=n-1;
    for(;i>=0;i--){
        temp+=v[i];
        if(temp==target){
            break;
        }
    }
    if(i==-1) return 0;
    int end=i-1;
    int ans=0;// Numer of subarrays with sum=k
    temp=0;
    map<int,int> prev_sum;
    for(int i=start;i<=end;i++){
        temp+=v[i];
        if(temp==target){
            ans++;
        }
        if(prev_sum.find(temp-target)!=prev_sum.end()){
            ans+=(prev_sum[temp-target]);
        }
        
        prev_sum[temp]++;
    }
    return ans;
}
