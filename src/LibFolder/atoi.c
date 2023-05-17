/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: atoi.c
*/

#include "stu.h"

int stu_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }
    while (*str != '\0' && *str >= '0' && *str <= '9') {
        num = num * 10 + (*str - '0');
        str++;
    }
    return num * sign;
}