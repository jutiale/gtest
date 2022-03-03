#ifndef ROOTS_H
#define ROOTS_H

typedef struct {
    int count;
    double x1, x2;
} Roots;

Roots roots(double a, double b, double c);

#endif // ROOTS_H
