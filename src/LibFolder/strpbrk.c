/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strpbrk.c
*/

#include "stu.h"

char *stu_strpbrk(const char *s, const char *accept)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i] != '\0') {
        while (accept[j] != '\0') {
            if (s[i] == accept[j]) {
                return (char *)&s[i];
            }
            j = j + 1;
        }
        j = 0;
        i = i + 1;
    }
    return 0;
}