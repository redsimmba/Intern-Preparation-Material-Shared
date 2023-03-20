// class Solution {
// public:
//     int maximumProduct(vector<int>& v) {
//         int n=v.size();
//         sort(v.begin(),v.end());
//         int c1=v[n-1]*v[n-2]*v[n-3];
//         int c2=v[n-1]*v[0]*v[1];
//         int c3=v[0]*v[1]*v[2];//v[0]*v[n-1]*v[n-2];
//         return max(max(c1,c2),c3);
//     }
// };