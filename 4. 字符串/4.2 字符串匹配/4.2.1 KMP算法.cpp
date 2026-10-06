vector<int> kmp(string& s){
	int n=s.size();
	vector<int> nex(n + 1);
	for(int i = 1, j = 0; i < n; i++){
		while(j && s[i] != s[j]){
			j = nex[j];
		}
		j += (s[i] == s[j]);
		nex[i + 1] = j;
	}
	return nex;
}
