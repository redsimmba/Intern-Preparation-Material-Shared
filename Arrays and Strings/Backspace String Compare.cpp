//Easy, First Time Approach, Take use of Vector's push and pop properties
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        vector<char> a;
        vector<char> b;
        for(int i=0;i<n1;i++){
            if(a.size()==0 && s[i]=='#'){
                continue;
            }
            if(s[i]=='#'){
                a.pop_back();
            }
            else{
                a.push_back(s[i]);
            }
        }
        for(int i=0;i<n2;i++){
            if(b.size()==0 && t[i]=='#'){
                continue;
            }
            if(t[i]=='#'){
                b.pop_back();
            }
            else{
                b.push_back(t[i]);
            }
        }
        return a==b;
        
        
    }
};

//Solution By Stack
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        stack<int> s1;
        stack<int> s2;
        for(int i=0;i<n1;i++){
            if(s[i]=='#' && s1.size()==0){
                continue;
            }
            if(s[i]=='#'){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        for(int i=0;i<n2;i++){
            if(t[i]=='#' && s2.size()==0){
                continue;
            }
            if(t[i]=='#'){
                s2.pop();
            }
            else{
                s2.push(t[i]);
            }
        }
        return s1==s2;
        
        
        
    }
};