/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strndup.c
*/

#include <stdlib.h>

#include "stu.h"

char *stu_strndup(const char *str, unsigned int nmb)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    char *test = malloc(sizeof(char) * i);
    i = 0;

    while (str[i] != '\0' && nmb > 0) {
        test[i] = str[i];
        i = i + 1;
        nmb = nmb - 1;
    }
    return (test);
}
