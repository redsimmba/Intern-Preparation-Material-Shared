int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    int steps=0;
    int n=a.size();
    int cur_x=a[0];
    int cur_y=b[0];
    for(int i=1;i<n;i++){
        //We calculate how many x and y moves are needed
        int x=abs(a[i]-cur_x);
        int y=abs(b[i]-cur_y);
        steps+=min(x,y)+abs(x-y);// min(x,y) no of diagonal moves, rest in right directions.
        cur_x=a[i];
        cur_y=b[i];
    }
    return steps;
}
