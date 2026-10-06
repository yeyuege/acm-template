vector<int> Z(string s){
	int n = s.size();
	vector<int> z(n + 1);
	z[0] = n;
	int l = 0, r = 0;
	for(int i = 1; i < n; i++){
		z[i] = (i > r)? 0 : min(z[i - l], r - i + 1);
		while(i + z[i] < n && s[i + z[i]] == s[z[i]]) z[i]++;
		if(i + z[i] - 1 > r){
			l = i;
			r = i + z[i] - 1;
		}
	}
	return z;
}
