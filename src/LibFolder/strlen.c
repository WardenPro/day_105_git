/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strlen.c
*/

#include "stu.h"

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0') {
        return (0);
    }
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}