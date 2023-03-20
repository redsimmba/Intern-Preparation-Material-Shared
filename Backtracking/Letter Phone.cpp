vector<string> ans;

void func(map<char,vector<char>> m, string x, string s, int n, int i){
    //Base Case
    if(i==n){
        ans.push_back(x);
        return;
    }
    //Recursive
    char ch=s[i];
    vector<char> v=m[ch];
    for(int j=0;j<v.size();j++){
        x.push_back(v[j]);
        func(m,x,s,n,i+1);
        x.pop_back();// To ensure that residual x doesn't go in the next iteration
    }
}


vector<string> Solution::letterCombinations(string s) {
    int n=s.length();
    ans.clear();
    map<char,vector<char>> m;
    m['0'].push_back('0');
    m['1'].push_back('1');
    m['2'].push_back('a');
    m['2'].push_back('b');
    m['2'].push_back('c');
    m['3'].push_back('d');
    m['3'].push_back('e');
    m['3'].push_back('f');
    m['4'].push_back('g');
    m['4'].push_back('h');
    m['4'].push_back('i');
    m['5'].push_back('j');
    m['5'].push_back('k');
    m['5'].push_back('l');
    m['6'].push_back('m');
    m['6'].push_back('n');
    m['6'].push_back('o');
    m['7'].push_back('p');
    m['7'].push_back('q');
    m['7'].push_back('r');
    m['7'].push_back('s');
    m['8'].push_back('t');
    m['8'].push_back('u');
    m['8'].push_back('v');
    m['9'].push_back('w');
    m['9'].push_back('x');
    m['9'].push_back('y');
    m['9'].push_back('z');
    string x;
    func(m,x,s,n,0);
    return ans;
         
    
}
