
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        int left=0;
        int right=c-1;
        int top=0;
        int bot=r-1;
        vector<int> v;
        int cnt=r*c;// to ensure no extra elements
        while(left<c and right>-1 and top<r and bot>-1){
            for(int i=left;i<=right;i++){
                // cout<<"IN"<<endl;
                if(cnt>0){
                    cnt--;
                }
                else{
                    break;
                }
                v.push_back(mat[top][i]);
            }
            top++;
            // break;
            for(int i=top;i<=bot;i++){
                 if(cnt>0){
                    cnt--;
                }
                  else{
                    break;
                }
                v.push_back(mat[i][right]);
            }
            // break;
            right--;
            for(int i=right;i>=left;i--){
                 if(cnt>0){
                    cnt--;
                }
                else{
                    break;
                }
                v.push_back(mat[bot][i]);
            }
            bot--;
            // break;
            for(int i=bot;i>=top;i--){
                 if(cnt>0){
                    cnt--;
                }
                else{
                    break;
                }
                v.push_back(mat[i][left]);
            }
            left++;
            // break;
        }
        return v;
        
    }


