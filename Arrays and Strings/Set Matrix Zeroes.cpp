class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
         int n=v.size();
    unordered_map<int,int> row;
    unordered_map<int,int> col;
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            if(row[i] || col[j]){
                v[i][j]=0;
            }
        }
    }
    }
};

//Or we can store the information about zeroes in the first row and first column onli.