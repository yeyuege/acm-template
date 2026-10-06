void solve(){
    int n;
    cin >> n;
    vector<Point<double>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
    }

    vector<Point<double>> hull = getFullHull(p);
    int m = hull.size();
    double ans = 0;
    if (m < 3) {
        ans = max(ans, distancePP(hull[0], hull[1]));
        cout << ll(ans * ans + 0.5) << "\n";
        return;
    }
    for(int i = 0, j = 2; i < m; i++) {
        while (distancePL(hull[j], Line(hull[i], hull[(i + 1) % m])) < distancePL(hull[(j + 1) % m], Line(hull[i], hull[(i + 1) % m]))) {
            j = (j + 1) % m;
        }

        ans = max(ans, distancePP(hull[j], hull[i]));
        ans = max(ans, distancePP(hull[j], hull[(i + 1) % m]));
    }

    cout << ll(ans * ans + 0.5) << "\n";
}
