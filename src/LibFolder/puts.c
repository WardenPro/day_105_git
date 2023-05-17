/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: puts.c
*/

#include <unistd.h>

#include "stu.h"

int stu_putchar(const char *c, int value)
{
    return (write(1, &*c, value));
}

int stu_puts(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    if (stu_putchar(str, i) == -1)

    {
        return (-1);
    } else {
        write(1, &"\n", 1);
        return (i + 1);
    }
}
