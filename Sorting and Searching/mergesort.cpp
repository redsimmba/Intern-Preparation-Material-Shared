#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v, int s, int mid, int e){
	//Size of first array-> mid-s+1, Size of Second Array-> e-mid
	int n1=mid-s+1;
	int n2=e-mid;
	//A new array to store elements
	vector<int> x(e-s+1);
	int it=0;
	int i=0;
	int j=mid+1;
	while(i<=mid && j<e){
		if(v[i]<v[j]){
			x[it]=v[i];
			it++;
			i++;
		}
		else{
			x[it]=v[j];
			it++;
			j++;
		}
	}
	while(i<=mid){
		x[it]=v[i];
		it++;
		i++;
	}
	while(j<e){
		x[it]=v[j];
		it++;
		j++;
	}
	int sec=0;
	for(int i=s;i<=e;i++){
		v[i]=x[sec];
		sec++;
	}
}
void mergesort(vector<int> &v, int s, int e){
	int mid=(s+e)/2;
	mergesort(v,s,mid);
	mergesort(v,mid+1,e);
	merge(v,s,mid,e);//Vector's first mid and last mid elements are sorted, we merge them both in this function
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	mergesort(v,0,n-1);f
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;f
	return 0;
}