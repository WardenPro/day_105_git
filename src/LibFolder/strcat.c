/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strcat.c
*/

#include "stu.h"

char *stu_strcat(char *dest, const char *src)
{
    int size;

    size = stu_strlen(dest);
    return stu_strcpy(&dest[size], src);
}
