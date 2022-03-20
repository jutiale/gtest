#ifndef ROOTS_H
#define ROOTS_H

typedef struct {
    int count;
    int flag;
    double x1;
    double x2;
} Roots;

Roots roots(double a, double b, double c);

#endif // ROOTS_H
