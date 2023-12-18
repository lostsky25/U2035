#pragma once
#include <iostream>
#include <cstdlib>

#include "Point.h"

template <class U>
struct Triangle {
    Point<U> pts[3];

    double square() const {
        double sq = pts[0].x * (pts[1].y - pts[2].y) +
            pts[1].x * (pts[2].y - pts[0].y) +
            pts[2].x * (pts[0].y - pts[1].y);
        return abs(sq) / 2.0;
    }

    void init(Point<U> p1, Point<U> p2, Point<U> p3) {
        pts[0] = p1;
        pts[1] = p2;
        pts[2] = p3;
    }
};