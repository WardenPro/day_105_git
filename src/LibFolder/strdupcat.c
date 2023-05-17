/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strdupcat.c
*/

#include <stdlib.h>
#include <unistd.h>

#include "stu.h"

char *stu_strdupcat(const char *a, const char *b)
{
    int i;
    char *tmp;

    i = stu_strlen(a) + stu_strlen(b);
    tmp = malloc(sizeof(char) * i + 2);
    stu_strcpy(tmp, a);
    stu_strcat(tmp, b);
    tmp[i] = '\0';
    return tmp;
}
