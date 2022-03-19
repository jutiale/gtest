#include <stdio.h>

#include "roots.h"

int main()
{
    Roots roots1 = roots(2, -5, -6);

    printf("Hello World!\n");
    return roots1.count;
}
