//Generate n bit gray codes

#include<iostream>
#include<vector>
#include <cmath>
#include<bitset>
#include<algorithm>
using namespace std;

vector<unsigned long> grayCode(int n) {
    if(n==0){
        vector<unsigned long> x;
        x.push_back(0);
        return x;
    }
   

  vector<string> v;
  v.push_back("0");
  v.push_back("1");
  for (int i = 2; i < pow(2,n); i*=2) {
    for (int j = i - 1; j >= 0; j--) {
      v.push_back(v[j]);
    }
    for (int j = 0; j < i; j++) {
      v[j] = "0" + v[j];
    }
    for (int j = i; j < 2 * i; j++) {
      v[j] = "1" + v[j];
    }


  }
  vector<unsigned long> damn;
  for(int i=0;i<v.size();i++){
      bitset<20> b(v[i]);
      int a=b.to_ulong();
      damn.push_back(a);
  }
  sort(damn.begin(),damn.end());
  return damn;
  

  //Write your code here
}


int main(int argc, char** argv) {
  int n;
  cin >> n;
  vector<unsigned long> res = grayCode(n);
  cout << "[";
  for (int i = 0; i < res.size(); i++) {
    cout << res[i];
    if (i != res.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]";
}