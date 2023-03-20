//Method 1 -> Store Frequencies in a key value map, if frequncy crosses (n/3) reset freq to INT_MIN, else [2,2] will fail. O(n) time, O(n) space
class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n=v.size();
         vector<int> x;
        int k=ceil(n/3);
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[v[i]]++;
            if(map[v[i]]>k){
                x.push_back(v[i]);
                map[v[i]]=INT_MIN;
            }
        }
        return x;
        
    }
};

//Method 2 -> Constant Space, O(n) time, Improved Bayer Moore, keep potential candidates as ans1 and ans2, along with counters c1 and c2, if ans1 and ans2 have frequncies higher than ceil(n/3), then we push in result array.
class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        vector<int> x;
        int n=v.size();
        int k=ceil(n/3);
        int c1=0,c2=0,ans1,ans2;
        for(int i=0;i<n;i++){
            if(ans1==v[i]){
                c1++;
            }
            else if(ans2==v[i]){
                c2++;
            }
            else if(c1==0){
                ans1=v[i];
                c1++;
            }
            else if(c2==0){
                ans2=v[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }  
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++){
            if(v[i]==ans1){
                c1++;
            }
            if(v[i]==ans2){
                c2++;
            }
        }
        if(c1>k){
            x.push_back(ans1);
        }
        if(c2>k){
            x.push_back(ans2);
        }
        return x;
        
        
    }
};
