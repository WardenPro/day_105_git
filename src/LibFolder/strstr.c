/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: strstr.c
*/

#include "stu.h"

char *stu_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (haystack[i] != '\0') {
        if (haystack[i] == needle[j]) {
            j = j + 1;
            if (needle[j] == '\0') {
                return (char *)&haystack[i];
            }
        } else {
            j = 0;
        }
        i = i + 1;
    }
    return 0;
}