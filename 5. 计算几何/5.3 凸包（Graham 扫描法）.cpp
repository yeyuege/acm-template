template<class T>
std::vector<Point<T>> gethull(vector<Point<T>> points) {
    for (int i = 1; i < points.size(); i++) {
        if (points[i].y < points[0].y || (points[i].y == points[0].y && points[i].x < points[0].x)) {
            swap(points[0], points[i]);
        }
    }

    sort(points.begin() + 1, points.end(), [&](Point<T>& a, Point<T>& b){
        if (atan2(a.y - points[0].y, a.x - points[0].x) == atan2(b.y - points[0].y, b.x - points[0].x)) {
            return distancePP(a, points[0]) < distancePP(b, points[0]);
        }
        return atan2(a.y - points[0].y, a.x - points[0].x) < atan2(b.y - points[0].y, b.x - points[0].x);
    });

    vector<Point<T>> hull;
    hull.push_back(points[0]);
    for (int i = 1; i < points.size(); i++) {
        while (hull.size() > 1 && cross(hull.back() - hull[hull.size() - 2], points[i] - hull.back()) < EPS) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }

    return hull;
}
