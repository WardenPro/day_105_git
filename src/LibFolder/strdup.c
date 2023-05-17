/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strdup.c
*/

#include <stdlib.h>

#include "stu.h"

char *stu_strdup(const char *str)
{
    int i;
    char *test;

    test = malloc(sizeof(char) * stu_strlen(str) + 2);
    i = 0;
    while (str[i] != '\0') {
        test[i] = str[i];
        i = i + 1;
    }
    test[i] = '\0';
    return (test);
}
