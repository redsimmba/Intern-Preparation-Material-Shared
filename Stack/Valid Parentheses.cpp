class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        int i=0;
        int l=s.length();
        while(i<l){
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                v.push(s[i]);
            }
            // if(s[i]=='}' && v.top()=='{'){
            //     v.pop();
            // }
            // if(s[i]==')' && v.top()=='('){
            //     v.pop();
            // }
            // if(s[i]==']' && v.top()=='['){
            //     v.pop();
            // }
            // i++;
             if (s[i] == '}')
            {
                if(v.empty())
                {
                    return false;
                }
                else if (v.top() == '{')
                {
                    v.pop();
                }
                else
                {
                    return false;
                }
            }
            if (s[i] == ']')
            {
                if(v.empty())
                {
                    return false;
                }
                else if (v.top() == '[')
                {
                    v.pop();
                }
                else
                {
                    return false;
                }
            }
            if (s[i] == ')')
            {
                if(v.empty())
                {
                    return false;
                }
                else if (v.top() == '(')
                {
                    v.pop();
                }
                else
                {
                    return false;
                }
            }
            i++;
        }
        return v.empty();
        
    }
};