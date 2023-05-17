
#include <stdio.h>

#include "stu.h"

void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n)
{
    unsigned int i = 0;
    char *dest2 = dest;
    const char *src2 = src;

    while (i < n) {
        dest2[i] = src2[i];
        i = i + 1;
    }
    return dest;
}