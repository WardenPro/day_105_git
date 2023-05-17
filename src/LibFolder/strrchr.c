/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strrchr.c
*/

#include "stu.h"

char *stu_strrchr(const char *str, char search)
{
    char *t;
    int i;

    t = 0;
    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    while (i > 0) {
        if (str[i] == search) {
            t = (char *)&str[i];
            return (t);
        }
        i = i - 1;
    }
    return "NULL";
}
