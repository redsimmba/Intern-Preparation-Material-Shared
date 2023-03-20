class Solution {
public:
    vector<int> twoSum(vector<int>& v, int key) {
        int n=v.size();
        vector<int> ans;
        int i=0;
        int j=n-1;
        while(i<n and j<n){
            if(v[i]+v[j]==key){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(v[i]+v[j]>key){// If current sum is too large, decrease j ( If we increase i, the sum will only get larger. We cannot decrement i)
                j--;
            }
            else{
                i++;// Else increment i
            }
        }
        return ans;
    }
};