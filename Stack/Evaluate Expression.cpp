int Solution::evalRPN(vector<string> &v) {
    stack<int> s;
    unordered_map<string,int> map;
    int n=v.size();
    map["+"]=1;
    map["-"]=2;
    map["*"]=3;
    map["/"]=4;
    for(int i=0;i<n;i++){
        if(map[v[i]]<=0){
            s.push(stoi(v[i]));
        }
        else if(map[v[i]]>=1 && map[v[i]]<=4){
            //cout<<v[i]<<" "<<map[v[i]]<<endl;
            
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            if(map[v[i]]==1){
                int t=x+y;
                s.push(t);
            }
            else if(map[v[i]]==2){
                int t=y-x;
                s.push(t);
            }
            else if(map[v[i]]==3){
                int t=x*y;
                s.push(t);
            }
            else if(map[v[i]]==4){
                int t=y/x;
                s.push(t);
            }
        
        }
        else{
            break;
        }
    }
    return s.top();
}


