//Method 1, My default thinking, that we take one from front of the sorted array and one from the back, Time is O(nlogn) Space is O(n).

// #include<bits/stdc++.h>
// using namespace std;
// void wiggleSort(vector<int>& v) {
//         vector<int> x=v;
//         int n=v.size();
//         sort(x.begin(),x.end());
//         int a=0,b=n-1;
//         for(int i=0;i<n;i++){
//             if(i%2){
//                 v[i]=x[b];
//                 b--;
//             }
//             else{
//                 v[i]=x[a];
//                 a++;
//             }
//         }

        
//         for(int i=0;i<n;i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;

        
//     }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     wiggleSort(v);
    
//     return 0;
// }

//Method 2, Optimised, O(n) time in a single pass, just use swapping and maintain the conditions.

#include<bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int>& v) {
        vector<int> x=v;
        int n=v.size();
        for(int i=0;i<n-1;i++){
        	if(i%2==0){
        		if(v[i+1]<v[i]){
        			swap(v[i+1],v[i]);
        		}
        	}
        	else{
        		if(v[i+1]>v[i]){
        			swap(v[i+1],v[i]);
        		}
        	}
        }

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    wiggleSort(v);
    
    return 0;
}