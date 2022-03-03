#include <stdio.h>
#include <math.h>

#include "roots.h"

Roots roots(double a, double b, double c) {
    Roots result;
    int d = b * b - 4 * a * c;
    if (d < 0) {
        result.count = 0;
    }
    if (d == 0) {
        result.count = 1;
        result.x1 = -b / (2 * a);
    }
    else {
        result.count = 2;
        result.x1 = (-b - sqrt(d)) / (2 * a);
        result.x2 = (-b + sqrt(d)) / (2 * a);
    }
    return result;
}
