//Very Important Learning Here is that push_back() in strings is faster than simply using + operator.



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	string FirstNonRepeating(string s){
	    int n=s.length();
	    string ans;
	    unordered_map<char,int> map;// TO store frquencies of characters until that point
	    queue<char> q;
	    for(int i=0;i<n;i++){
	        q.push(s[i]);
	        map[s[i]]++;
	        while(!q.empty() && map[q.front()]>1){// While the front character is having freq. > 2 i.e its repeated, we pop it.
	            q.pop();
	        }
	        if(q.empty()){
	            ans.push_back('#');
	        }
	        else{
	            ans.push_back(q.front());
	        }
	    }
	    return ans;
		    // Code here
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends