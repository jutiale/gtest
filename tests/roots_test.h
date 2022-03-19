#ifndef ROOTS_TEST_H
#define ROOTS_TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "roots.h"
}


TEST(roots, Dgt0) {
    int x1 = -5, x2 = -6;

    Roots testRoots = roots(1, 11, 30);
    ASSERT_EQ(testRoots.count, 2);
    ASSERT_TRUE((testRoots.x1 == x1 && testRoots.x2 == x2) || (testRoots.x1 == x2 && testRoots.x2 == x1));
}

TEST(roots, Deq0) {
    Roots testRoots = roots(1, 4, 4);
    ASSERT_EQ(testRoots.count, 1);
    ASSERT_TRUE(testRoots.x1 == -2);
}

TEST(roots, Dls0) {
    Roots testRoots = roots(1, 2, 4);
    ASSERT_EQ(testRoots.count, 0);
}

TEST(roots, float_roots) {
    double x1 = (-3.8 - sqrt(15.4)) / 2.4, x2 = (-3.8 + sqrt(15.4)) / 2.4, infinitesimal_quantities = 1e-15;

    Roots testRoots = roots(1.2, 3.8, -0.2);
    ASSERT_EQ(testRoots.count, 2);
    ASSERT_TRUE((fabs(testRoots.x1 - x1) < infinitesimal_quantities && fabs(testRoots.x2 - x2) < infinitesimal_quantities) || (fabs(testRoots.x1 - x2) < infinitesimal_quantities && fabs(testRoots.x2 - x1) < infinitesimal_quantities));
}

#endif // ROOTS_TEST_H
