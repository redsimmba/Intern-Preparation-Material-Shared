// sorting approach


#include <bits/stdc++.h>
using namespace std;

void sortK(int v[], int n, int k) {
    sort(v,v+n);
    return ;


}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) {
    int data;
    cin >> data;
    arr[i] = data;
  }
  int k;
  cin >> k;
  sortK(arr, n, k);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<endl;
  }
  return 0;
}

// heap approach

#include <bits/stdc++.h>
using namespace std;

void sortK(int v[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> ans;
    for(int i=0;i<=k;i++){// 0 can deflect to k max, K deflections
       // cout<<"Push"<<v[i]<<endl;
        q.push(v[i]);
    }
    for(int i=k;i<n;i++){
        cout<<q.top()<<endl;
        q.pop();
        q.push(v[i]);
        //cout<<"Push"<<v[i]<<endl;
    }
    while(!q.empty()){
       cout<<q.top()<<endl;
        q.pop();
    }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) {
    int data;
    cin >> data;
    arr[i] = data;
  }
  int k;
  cin >> k;
  sortK(arr, n, k);
  
  return 0;
}