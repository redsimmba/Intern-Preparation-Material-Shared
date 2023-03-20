//Naive Approach, Extra space used
class Solution {
public:
    bool check(char x){
        if(('a'<=x && x<='z') || ('A'<=x && x<='Z')){
            return true;
        }
        return false;
    }
   
    string truncateSentence(string s, int k) {
        int n=s.length();
        vector<string> v;
        int i=0;
        while(i<n){
            if(check(s[i])){
                string p;
                while(check(s[i]) && i<n){
                    p=p+s[i];
                    i++;
                }
                v.push_back(p);
            }
            else{
                i++;
            }
        }
        string ans;
        for(int j=0;j<k;j++){
            cout<<v[j]<<endl;
            ans=ans+v[j];
            if(j<k-1){
            ans=ans+' ';
            }
        }
        return ans;
        
    }
};

//Optimised Approach, no extra space as vector of strings
class Solution {
public:
    bool check(char x){
        if(('a'<=x && x<='z') || ('A'<=x && x<='Z')){
            return true;
        }
        return false;
    }
   
    string truncateSentence(string s, int k) {
        int n=s.length();
        int i=0;
        string ans;
        int t=0;
        while(i<n){
            if(check(s[i])){
                string p;
                while(check(s[i]) && i<n){
                    p=p+s[i];
                    i++;
                }
                if(t<k){
                    ans=ans+p;
                    
                    if(t<k-1){
                        ans=ans+' ';
                    }
                    t++;
                }
                else{
                    break;
                }
            }
            else{
                i++;
            }
        }
        return ans;
        
    }
};

//Best Approach, String Erase Function
class Solution {
public:
   
    string truncateSentence(string s, int k) {
        int n=s.length();
        int i=0;
        for(;i<n;i++){
            if(s[i]==' '){
                k--;
            }
            if(k==0){//kth gap will be deleted and so will the string after it
                break;
            }
        }
        s.erase(s.begin()+i,s.end());
        return s;
    }
};