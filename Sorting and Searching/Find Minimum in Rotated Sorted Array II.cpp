//First Solution O(n) and O(1)
// class Solution {
// public:
//     int findMin(vector<int>& v) {
//         for(int i=0;i<v.size()-1;i++){
//             if(v[i]>v[i+1]){
//                 return v[i+1];
//             }
//         }
//         return v[0];
        
//     }
// };


//Second Solution O(logn) and O(1)
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
        
//         // TC  = O(N)
        
//         // int ans = INT_MAX;
//         // for(auto x : nums){
//         //     ans = min(ans,x);
//         // }
//         // return ans;
        
        
//          int n = nums.size();
//         int l=0;
//         int h = n-1;
//         while(l<h){
//             int mid = l + (h-l)/2;
//             if(nums[mid]>nums[h]){
//                 l = mid+1;
//             }
//             else if(nums[mid]< nums[h]){
//                 h=mid;
//             }
//             else{
//                 h--;       // when nums[mid] and nums[h] are same
//             }
//         }
        
//             return nums[l];
//     }
// };