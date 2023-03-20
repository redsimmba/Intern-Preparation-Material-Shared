// Recursive+Memoised Solution ( Starting from index 0 )
int t[1002][1002];
  int func(int*price, int i, int wt){
      // Base Case
      if(wt<=0){
          return 0;
      }
      if(i>wt){
          return 0;
      }
      if(t[i][wt]!=-1){
          return t[i][wt];
      }
      int cand1=INT_MIN;
      int cand2=INT_MIN;
      cand1=price[i-1]+func(price,i,wt-(i));
      cand2=func(price,i+1,wt);
      return t[i][wt]=max(cand1,cand2);
      
  }
    int cutRod(int price[], int n) {
        //code here
        memset(t,-1,sizeof(t));
        return func(price,1,n);
    }

// Recursive + Memoised ( Staring from index n-1 )
  int t[1002][1002];
  int func(int*price, int i, int wt){
      // Base Case
      if(wt==0){
          return 0;
      }
      if(i<=0){
          return 0;
      }
      if(t[i][wt]!=-1){
          return t[i][wt];
      }
      int cand1=INT_MIN;
      if(i<=wt){// Keep in mind we're comparing length to the remaining length
          cand1=price[i-1]+func(price,i,wt-(i));
      }
      int cand2=func(price,i-1,wt);
      return t[i][wt]=max(cand1,cand2);
      
  }
    int cutRod(int price[], int n) {
        //code here
        memset(t,-1,sizeof(t));
        int x= func(price,n,n);
        return x;
    }


// Bottom up DP
 int cutRod(int price[], int n) {
        //code here
        int t[n+1][n+1];// Index of array and the length remaining
        memset(t,0,sizeof(t));// 0 as the profit is 0 both when we're having rod length as 0 and having price array as 0 length
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int cand1=INT_MIN;
                if(i<=j){
                    cand1=price[i-1]+t[i][j-i];// j - i means that we subtract the given index as length from the given rod length
                }
                int cand2=t[i-1][j];
                t[i][j]=max(cand1,cand2);
            }
            
        }
        return t[n][n];
    }

// Space Optimised O(n) extra space solution
int cutRod(int price[], int n) {
        //code here
        int t[n+1];// Index of array and the length remaining, we just take the remaining length and store its max price
        memset(t,0,sizeof(t));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int cand1=INT_MIN;
                if(i<=j){
                    cand1=price[i-1]+t[j-i];
                }
                int cand2=t[j];
                t[j]=max(cand1,cand2);
            }
            
        }
        return t[n];
    }