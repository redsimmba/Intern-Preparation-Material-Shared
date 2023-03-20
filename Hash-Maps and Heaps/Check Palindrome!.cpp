int Solution::solve(string s) {
    int n=s.length();
    // if(n==1){
    //     return 1;
    // }
    unordered_map<char,int> map;
    for(int i=0;i<n;i++){
        map[s[i]]++;
    }
    int even=0,odd=0;
    for(auto i: map){
        if(i.second%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd==0){// If all elements are even then palindrome is possible
        return 1;
    }
    if(odd==1){// If just one element is odd it can be the centre element.
        return 1;
    }
    return 0;
    
}
