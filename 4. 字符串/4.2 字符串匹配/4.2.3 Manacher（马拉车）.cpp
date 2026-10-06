vector<int> manacher(string s){
    string t = "@#";
    for(int i = 0; i < s.length(); i++){
        t += s[i];
        t += '#';
    }
    int n = t.size() - 1;
    t += '!';
    vector<int> p(n + 1);
    int id, mx = 0;
    for(int i = 1; i <= n; i++){
        if(i < mx){
            p[i] = min(mx - i, p[2 * id - i]);
        }
        else {
            p[i] = 1;
        }
        while(t[i - p[i]] == t[i + p[i]]){
            p[i]++;
        }
        if(mx < i + p[i]){
            mx = i + p[i];
            id = i;
        }
    }
    return p;
}
