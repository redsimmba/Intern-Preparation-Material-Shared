int Solution::solve(string s) {
      int n=s.length();
      int i=0;
      int j=n-1;
      int start=0;
      int init=0;
      while(i<j){
          if(s[i]==s[j]){
              i++;
              j--;
          }
          else{
              j=n-1;
              i=init;
              start=i;
          }
          init++;
      }
      return start;
      
}

// Similar as the front additon one, just i and j are interchanged