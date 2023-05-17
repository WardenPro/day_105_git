/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strncpy.c
*/

#include "stu.h"

char *stu_strncpy(char *dest, const char *src, unsigned int n)
{
    int i;

    i = 0;
    while (src[i] != '\0') {
        i = i + 1;
    }
    i = 0;
    while (src[i] != '\0' && n > 0) {
        dest[i] = src[i];
        i = i + 1;
        n = n - 1;
    }
    return dest;
}
