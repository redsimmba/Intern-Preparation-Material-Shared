class Solution {
public:
    bool greater(string s, int i){
        for(int j=i;j<s.length();j++){
            if(s[j]>s[i]){
                return true;
            }
        }
        return false;
    }
    int next(string s, int i){
        char x=s[i];
        int maxa=i+1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]>=x){
                x=s[j];
                maxa=j;
            }
        }
        return maxa;
    }
    int maximumSwap(int n) {
        string s=to_string(n);
        for(int i=0;i<s.length()-1;i++){
            if(greater(s,i)){
                int j=next(s,i);
                swap(s[i],s[j]);
                break;
            }
            
        }
        int b=stoi(s);
        return b;
        
    }
};