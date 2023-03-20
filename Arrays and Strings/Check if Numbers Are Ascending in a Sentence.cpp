//Naive Approach, Push Numerals into array after using stoi, O(n) time, O(no. of numerals) space.
class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=s.length();
        vector<int> v;
        int t=48;
        unordered_map<char,int> map;
        for(int i=0;i<256;i++){
            char x=i;
            map[x]=0;
        }
        while(t<=57){
            char x=t;
            map[x]=1;
            t++;
        }
        int i=0;
        while(i<n){
            if(map[s[i]]==1){
                string p;
                while(map[s[i]]){
                    p=p+s[i];
                    i++;
                }
                v.push_back(stoi(p));
            }
            else{
                i++;
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                //cout<<v[i]<<" "<<v[i+1]<<endl;
                return false;
            }
        }
        return true;
        
    }
};

