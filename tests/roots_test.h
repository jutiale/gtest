#ifndef ROOTS_TEST_H
#define ROOTS_TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "roots.h"
}


TEST(roots, Dgt0) {
    int x1 = -5, x2 = -6;

    Roots testRoots = roots(1, 11, 30);
    ASSERT_EQ(testRoots.count, 2);
    ASSERT_TRUE((testRoots.x1 == x1 && testRoots.x2 == x2) || (testRoots.x1 == x2 && testRoots.x2 == x1));
}


#endif // ROOTS_TEST_H
