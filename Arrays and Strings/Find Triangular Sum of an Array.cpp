//Naive Method, Use a temp array, empty it time to time, and fill with required values, requires 2 arrays
#include<vector>

class Solution {
public:
    int triangularSum(vector<int>& v) {
        int n=v.size();
        vector<int> x;
        for(int i=0;i<n;i++){
             x.clear();
            for(int j=0;j<v.size()-1;j++){
                x.push_back((v[j]+v[j+1])%10);
            }
            v.clear();
            //cout<<v.size()<<" "<<v[0]<<endl;
            v=x;
            //cout<<v.size()<<" "<<v[0]<<endl;
         
        }
        return v[0];
        
        
    }
};

//Memory Optimised Solution, Can use singke array to accomplish the same task
#include<vector>

class Solution {
public:
    int triangularSum(vector<int>& v) {
        int n=v.size();
        vector<int> x;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<n-1;j++){
                v[j]=(v[j]+v[j+1])%10;
            }
            n--;
         
        }
        return v[0];
        
        
    }
};
