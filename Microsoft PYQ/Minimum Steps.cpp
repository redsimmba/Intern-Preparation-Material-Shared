// O(n2) worst case solution, but works
int minimumSteps(int n, vector<int> &v)
{
    int mina=*min_element(v.begin(),v.end());
    int cnt=0;
    int maxa=*max_element(v.begin(),v.end());
    while(maxa!=mina){
        int nos=0;// no of occurences of max element
        int sec_max=INT_MIN;
        for(int i=0;i<n;i++){
            if(v[i]>maxa){
                v[i]=maxa;
            }
            if(v[i]==maxa){
                nos++;
            }
            if(v[i]<maxa && v[i]>sec_max){
                sec_max=v[i];
            }
        }
            maxa=sec_max;
            cnt+=nos;
    }
    return cnt;
    
}

// Using Sorting
#include<bits/stdc++.h>

int minimumSteps(int n, vector<int> &v)
{
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int cnt=0;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            cnt+=i;
        }
    }
    return cnt;
}
    
    