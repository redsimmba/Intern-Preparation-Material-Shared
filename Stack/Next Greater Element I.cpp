class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v) {
        int n=v.size();
	    stack<int> s;
	    s.push(v[n-1]);
	    vector<int> ans(n);
	    ans[n-1]=-1;
	    for(int i=n-2;i>=0;i--){
		    int cur=v[i];
		    while(!s.empty() && cur>=s.top()){
			    s.pop();
		    }
		    if(s.empty()){
			    ans[i]=-1;
		    }
		    else{
			    ans[i]=s.top();
		    }
		    s.push(v[i]);
	    }
        //Answer Array contains the next greater element on the right for the second array
        vector<int> r(v1.size());
        unordered_map<int,int> map;//To store the indices of the second array
        for(auto i=0;i<v.size();i++){
            map[v[i]]=i;
        }
        for(auto i=0;i<v1.size();i++){//Return the values from the ans array
            r[i]=ans[map[v1[i]]];
        }
        return r;
    }
};