string isCircular(string s){
    int x=0;
    int y=0;
    char dir='N';
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='G' and dir=='N'){
            y++;
        }
        else if(s[i]=='L' and dir=='N'){
            dir='W';
        }
        else if(s[i]=='R' and dir=='N'){
            dir='E';
        }
        else if(s[i]=='G' and dir=='S'){
            y--;
        }
        else if(s[i]=='L' and dir=='S'){
            dir='E';
        }
        else if(s[i]=='R' and dir=='S'){
            dir='W';
        }
        else if(s[i]=='G' and dir=='E'){
            x++;
        }
        else if(s[i]=='L' and dir=='E'){
            dir='N';
        }
        else if(s[i]=='R' and dir=='E'){
            dir='S';
        }
        else if(s[i]=='G' and dir=='W'){
            x--;
        }
        else if(s[i]=='L' and dir=='W'){
            dir='S';
        }
        else if(s[i]=='R' and dir=='W'){
            dir='N';
        }
        
    }
    if(x==0 and y==0){
        return "Circular";
    }
    return "Not Circular";
}