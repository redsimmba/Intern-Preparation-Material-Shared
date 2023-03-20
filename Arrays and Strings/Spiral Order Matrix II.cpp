vector<vector<int> > Solution::generateMatrix(int n) {
 
    vector<vector<int>> v(n,vector<int> (n,0));
    int left=0;
        int right=n-1;
        int top=0;
        int bot=n-1;
        // vector<int> v;
        int cnt=n*n;// to ensure no extra elements
        int no=1;
        while(left<n and right>-1 and top<n and bot>-1){
            for(int i=left;i<=right;i++){
                // cout<<"IN"<<endl;
                if(cnt>0){
                    cnt--;
                }
                else{
                    break;
                }
                // v.push_back(mat[top][i]);
                v[top][i]=no;
                no++;
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
                // v.push_back(mat[i][right]);
                v[i][right]=no;
                no++;
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
                // v.push_back(mat[bot][i]);
                v[bot][i]=no;
                no++;
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
                // v.push_back(mat[i][left]);
                v[i][left]=no;
                no++;
            }
            left++;
            // break;
        }
        return v;
    
}
