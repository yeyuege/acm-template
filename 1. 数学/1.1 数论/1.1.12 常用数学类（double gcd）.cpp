double gcd(double a,double b) {    //double类型的最大公约数
    if(fabs(b) < EPS)
        return a;
    if(fabs(a) < EPS)
        return b;
    return gcd(b, fmod(a, b));    //fmod(a,b), double类型的取模
}
