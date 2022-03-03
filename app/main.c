#include <stdio.h>

#include "myfunc.h"
#include "roots.h"

int main()
{
    Roots roots1 = roots(2, -5, -6);

    printf("Hello World!\n");
    return myfunc(2) + roots1.count;
}
