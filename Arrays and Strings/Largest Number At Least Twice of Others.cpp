//Method 1, 2 loops, 1 to check for the max element, other to check whether it is greater than all the other elements*2 - 70 space 7 time

class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int index=0;
        int maxa=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>maxa){
                maxa=v[i];
                index=i;
            }
        }
        for(int i=0;i<v.size();i++){
            if(i==index){
                continue;
            }
            if(2*v[i]>maxa){
                return -1;
            }
        }
        return index;
    }
};
 //Method 2, 2 loops, 1 to get max element, 1 to get second max element, then compare max/2>=sec_max to get ans, 2*sec max willl give overflow error. 100 time 70 space
class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int index=0;
        int maxa=INT_MIN;
        int sec_max=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>maxa){
                maxa=v[i];
               
                index=i;
            }
           
            
        }
        for(int i=0;i<v.size();i++){
            if(i==index){
                continue;
            }
            if(v[i]>sec_max && v[i]<maxa){
                sec_max=v[i];
            }
        }
        cout<<sec_max<<" "<<maxa<<endl;
        if(maxa/2>=sec_max){
            return index;
        }
        return -1;
    }
};


//Method 3, calculate sec_max by sorting, 60 time, 70 space
class Solution {
public:
    int dominantIndex(vector<int>& v) {
        if(v.size()<2){
            return 0;
        }
        int index=0;
        int maxa=INT_MIN;
        
        for(int i=0;i<v.size();i++){
            if(v[i]>maxa){
                maxa=v[i];
               
                index=i;
            }  
        }
        sort(v.begin(),v.end());
        int sec_max=v[v.size()-2];
        
        // cout<<sec_max<<" "<<maxa<<endl;
        if(maxa/2>=sec_max){
            return index;
        }
        return -1;
    }
};