/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strchr.c
*/

#include "stu.h"

char *stu_strchr(const char *str, char search)
{
    char *t;
    int i;

    t = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == search) {
            t = (char *)&str[i];
            return (t);
        }
        return "NULL";
        i = i + 1;
    }
    return (t);
}
