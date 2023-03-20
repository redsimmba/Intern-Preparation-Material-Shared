bool allones(string s){
	for(int i=0;i<s.length();i++){
		if(s[i]!='1'){
			return false;
		}
	}
	return true;
}
bool odd(string s){
	int cnt=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			cnt++;
		}
	}
	return (cnt%2)==1;
}

vector<string> function(vector<string> v){
	int n=v.size();
	vector<int> ans;
	for(int i=0;i<n;i++){
		string s=v[i];
		if(allones(s)){
			ans.push_back("TIE");
			continue;
		}
		if(odd(s)){
			ans.push_back("ERNIE");
		}
		else{
			ans.push_back("BERT");
		}
	}
	return ans;
}