/*
 * E89 Pedagogical & Technical Lab
 * project:     src
 * created on:  Sat May  6 12:24:37 2023
 * 1st author:  user
 * description: swap_int.c
*/

#include <stdio.h>

#include "stu.h"

int swap_int(int *xtata, int *xtoto)
{
    int test;

    test = *xtata;
    *xtata = *xtoto;
    *xtoto = test;
    return (0);
}
