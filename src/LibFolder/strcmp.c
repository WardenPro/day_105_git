/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strcmp.c
*/

#include "stu.h"

int stu_strcmp(const char *s1, const char *s2)
{
    int i;
    char test;

    i = 0;
    test = 0;
    while (s1[i] || s2[i] != '\0') {
        if (s1[i] == s2[i]) {
            test = 0;
        } else if (s1[i] < s2[i]) {
            test = -1;
        } else if (s1[i] > s2[i]) {
            test = 1;
        }
        i = i + 1;
    }
    return test;
}
