#include<bits/stdc++.h>
using namespace std;
int dx {-1,0,1,0};
int dy={0,-1,0,1};// Positions
// ch is the character to be replaced
// color is the character to be added
void floodfill(vector<vector<char>> &mat, int i, int j, char ch, char color){
	// Base Case, Matrix Bounds
	  if(i<0 || j<0 || i>=r || j>=c){
	  	return;
	  }

	// Figure Boundary Condition
	  if(mat[i][j]!=ch){
	  	return ;
	  }


	// Recursive Call
	  mat[i][j]=color;
	  for(int k=0;k<4;k++){
	  	floodfill(mat,i+dx,j+dy,ch,color);
	  }

}
void printmatrix(vector<vector<char>> input){
	for(int i=0;i<input.size();i++){
		for(int j=0;j<input[i].size();j++){
			cout<<input[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int r,c;
	cin>>r>>c;
	vector<vector<char>> input(15,vector<char> (50));

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>input[i][j];
		}
	}
	floodfill(input,8,13,'.','r');// starting indices
	printmatrix(input);



}