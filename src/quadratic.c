#include "quadratic.h"
#include <math.h>

int solve_quadratic(double a, double b, double c, double roots[2]) {
    if (a == 0.0)
        return -1;

    double d = b * b - 4 * a * c;

    if (d < 0)
        return 0;

    if (d == 0) {
        roots[0] = -b / (2 * a);
        return 1;
    }

    double sqrt_d = sqrt(d);

    roots[0] = (-b - sqrt_d) / (2 * a);
    roots[1] = (-b + sqrt_d) / (2 * a);

    return 2;
}
