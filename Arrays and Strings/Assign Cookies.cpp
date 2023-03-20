//Brute Force Approach, O(n2) time. Check each for each
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int k=0;
        for(int i=0;i<g.size();i++){
            while(k<s.size()){
                if(g[i]<=s[k]){
                    ans++;
                    k=k+1;
                    break;
                }
                k++;
            }
        }
        return ans;
    }
};

//Optimised Approach, O(nlogn) time. Single Parse of the Shorter Array.
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int end=s.size()-1;
        int star=g.size()-1;
        while(end>=0 && star>=0){
            if(g[star]<=s[end]){
                star--;
                end--;
                ans++;
            }
            else{
                star--;
            }
        }
        return ans;
    }
};