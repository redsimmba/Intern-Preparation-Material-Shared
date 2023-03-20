//Intuitive Approach, Use map to store frequencies, then sort those frequencies, and remove highest to lowest until we get the sum>= half of the array
class Solution {
public:
    int minSetSize(vector<int>& v) {
        unordered_map<int,int> map;//To store character frequencies
        int n=v.size();
        for(int i=0;i<n;i++){
            map[v[i]]++;
        }
        vector<int> x;
        for(auto i:map){
            x.push_back(i.second);//Store frequencies in vector to sort and find max
        }
        sort(x.begin(),x.end());
        int ans=0;
        int val=0;
        for(int i=x.size()-1;i>=0;i--){
            ans+=x[i];//adding freuencies to ans until ans >= sum of half of the array
            val++;
            if(ans>=(n/2)){
                break;
            }
        }
        
        return val;//No of freqencies removed is equal to the number of characters removed to obtain sum of half the array
        
    }
};



