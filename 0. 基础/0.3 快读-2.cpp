// ============ fread 快速输入 ============
const int MAXBUF = 1 << 20;
static char buf[MAXBUF];
char *p1 = buf, *p2 = buf;

inline char getchar_fread() {
    if (p1 == p2) {
        p2 = (p1 = buf) + fread(buf, 1, MAXBUF, stdin);
        if (p1 == p2) return EOF;
    }
    return *p1++;
}

inline int read() {
    int s1 = 0, w = 1;
    char ch = getchar_fread();
    while (ch < '0' || ch > '9') {
        if (ch == '-') w = -1;
        ch = getchar_fread();
    }
    while (ch >= '0' && ch <= '9') {
        s1 = s1 * 10 + ch - '0';
        ch = getchar_fread();
    }
    return s1 * w;
}

inline char read_char() {
    char ch = getchar_fread();
    while (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t') {
        ch = getchar_fread();
    }
    return ch;
}
// ========================================
