constexpr int N =1e6 + 10;

int trie[N][26];
int val[N];
int tot;

void insert(string s){
	int p=0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			tot++;
			trie[p][s[i] - 'a'] = tot;
			p = tot;
		}
	}
}

int query(string s){
	int p = 0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			return 0;
		}
	}
	return p;
}

void clear(){
	for(int i=0;i<=tot;i++){
		for(int j=0;j<26;j++){
			trie[i][j] = 0;
		}
		val[i] = 0;
	}
	return;
}
