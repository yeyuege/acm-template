constexpr int N =1e6 + 10;

int trie[N][26];
int fail[N];
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
	val[p]++;
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

void build(){
	queue<int> q;
	for(int i = 0; i < 26; i++){
		if(trie[0][i] != 0){
			q.push(trie[0][i]);
		}
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int i = 0; i < 26; i++){
			if(trie[u][i] != 0){
				fail[trie[u][i]] = trie[fail[u]][i];
				q.push(trie[u][i]);
			}
			else {
				trie[u][i] = trie[fail[u]][i];
			}
		}
	}
}

void clear(){
	for(int i=0;i<=tot;i++){
		for(int j=0;j<26;j++){
			trie[i][j] = 0;
		}
		val[i] = 0;
		fail[i] = 0;
	}
	tot = 0;
	return;
}
