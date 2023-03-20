 int minChar(string s){
         int n=s.length();
      int i=0;
      int j=n-1;
      int start=n-1;
      int ini=n-2;// Index to store value where the characters don't match, so that we can start comapring it with s[n-1] again from there, by default it is n-2;
      while(i<j){
          if(s[i]==s[j]){// palindrome condition satisfied
              i++;
              j--;
              continue;
          }
          else{
              i=0;// our start returns to 0
              j=ini;// our last element goes to the current element where we are present
              start=j;// our answer vaiable stores this index as the end index
          }
          ini--;
      }
      return n-1-start;// Basically no of elements left after the start index
    }

    // Just TLE trouble