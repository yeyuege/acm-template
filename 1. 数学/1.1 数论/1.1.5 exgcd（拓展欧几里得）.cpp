// a * x + b * y == gcd(a, b)
// return gcd(a, b)
ll exgcd(ll a, ll b, ll& x, ll& y) {
    if (!b) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = exgcd(b, a % b, x, y);
    ll t = x;
    x = y;
    y = t - (a / b) * x;
    return d;
}

// a * x + b * y == d
bool find(ll a, ll b, ll d, ll& x, ll & y) {
    ll pa = a, pb = b, pd = d;
    ll g = exgcd(a, b, x, y);
    if (d % g) return false;

    a /= g, b /= g, d /= g;
    ll x1 = x * d;
    x1 = (x1 % b + b) % b;
    ll y1 = (d - a * x1) / b;
    x1 = abs(x1), y1 = abs(y1);
    y *= d;
    y = (y % a + a) % a;
    x = (d - b * y) / a;
    if(abs(x) + abs(y) > abs(x1) + abs(y1)) x = x1, y = y1;
    x = abs(x), y = abs(y);
    return pa * x + pb * y == pd;
}
