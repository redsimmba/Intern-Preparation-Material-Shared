#include <bits/stdc++.h>
using namespace std;
#define int long long int
class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}  
};
node* buildtree(node * root){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	root=new node(d);
	root->left=buildtree(root->left);
	root->right=buildtree(root->right);
	return root; 

}
void print(node * root){
	if(root==NULL){
		return ;
	}
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);

}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node* root=
    



	return 0;
}

