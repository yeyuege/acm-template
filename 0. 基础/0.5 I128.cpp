using i128 = __int128;
istream &operator>>(istream &it, i128 &j) {
    string val;
    it >> val;
    
    bool neg = (val[0] == '-');
    j = 0;
    for (size_t i = neg ? 1 : 0; i < val.size(); i++) {
        j = j * 10 + (val[i] - '0');
    }
    if (neg) j = -j;
    return it;
}
ostream &operator<<(ostream &os, i128 n){
	if(n == 0){
		return os << 0;
	}
	string s;
    bool neg = (n < 0);
    if(neg) n = -n;
	while(n > 0){
		s += char('0' + n % 10);
		n /= 10;
	}
    if(neg) s += '-';
	reverse(s.begin(),s.end());
	return os << s;
}
i128 toi128(const string &s){
	i128 n = 0;
	for (auto c : s){
		n = n * 10 + (c - '0');
	}
	return n;
}
i128 sqrti128(i128 n){
	i128 lo = 0, hi = 1E16;
	while(lo < hi){
		i128 x = (lo + hi + 1) / 2;
		if(x * x <= n){
			lo = x;
		}
		else {
			hi = x - 1;
		}
	}
	return lo;
}
i128 gcd(i128 a,i128 b){
	while(b){
		a %= b;
		swap(a,b);
	}
	return a;
}
